
import logging
import sys
import glob
import os
import os.path
import re

logger = logging.getLogger("RSTcodeCheck")

# checks

class Check(object):

    def __init__(self, fileContents, fileLines, fileNameFromRoot, errorHandler):
        self.fileContents = fileContents
        self.fileLines = fileLines
        self.fileNameFromRoot = fileNameFromRoot
        self.errorHandler = errorHandler

        # generate the name of primary message from file name
        fileName = os.path.basename(self.fileNameFromRoot)
        assert(fileName[-6:] == ".proto")
        self.primaryMessageNameFromFileName = fileName[:-6]


    def check(self):
        raise NotImplementedError()

class CheckPackageMatchFolder(Check):

    packageRegEx = re.compile("package (.+);")

    def check(self):
        declaredPackages = self.packageRegEx.findall(self.fileContents)

        if len(declaredPackages) == 0:
            self.errorHandler.addError(description="No package declared.")
            return
        elif len(declaredPackages) > 1:
            self.errorHandler.addError(description="Multiple packages declared. Only one is allowed.")
            return

        packagePathParts = declaredPackages[0].split('.')

        # split the file path into a list of components
        fileNameParts = []
        remainingPath = self.fileNameFromRoot
        while True:
            (remainingPath, tail) = os.path.split(remainingPath)
            if len(tail) == 0:
                break;
            fileNameParts = [tail] + fileNameParts
        fileNameParts = fileNameParts[:-1]

        if packagePathParts != fileNameParts:
            self.errorHandler.addError(description="Declared package %s does not match file name and location" % declaredPackages[0])

class CheckJavaOuterClassname(Check):

    outerClassnameRegEx = re.compile('option( +)java_outer_classname( +)=( +)"(.+)";')

    def check(self):
        declaredOuterClassnames = self.outerClassnameRegEx.findall(self.fileContents)

        if len(declaredOuterClassnames) == 0:
            self.errorHandler.addError(description="No java_outer_classname definition found")
            return
        if len(declaredOuterClassnames) > 1:
            self.errorHandler.addError(description="Multiple java_outer_classname definition found")
            return

        outerClassname = declaredOuterClassnames[0]

        # first check the actual classname against the file name
        expectedName = self.primaryMessageNameFromFileName + "Type"
        if outerClassname[3] != expectedName:
            self.errorHandler.addError(description="Declared java_outer_classname '%s' does not match expected '%s'" % (outerClassname[3], expectedName))

        # now check white spaces
        for i in range(3):
            if len(outerClassname[i]) != 1:
                self.errorHandler.addError(description="Too many spaces in java_outer_classname definition.")

class CheckMessageMatchesFileName(Check):

    messageRegEx = re.compile("message (\w+) {")

    def check(self):

        declaredMessages = self.messageRegEx.findall(self.fileContents)

        for msg in declaredMessages:
            if msg == self.primaryMessageNameFromFileName:
                return

        self.errorHandler.addError(description="No declared message name (found %s) matches the primary message name %s defined through the file name" % (declaredMessages, self.primaryMessageNameFromFileName))


# utility stuff

def getProtoFilesRecursive(folder):

    logger.info("Analyzing folder %s for proto files", folder)

    protoFiles = []
    for root, dirs, files in os.walk(folder):
        for f in files:
            if f[-6:] == ".proto":
                protoFiles.append(root + os.path.sep + f)
    logger.debug("Found files: %s", protoFiles)

    return protoFiles

class FileErrorHandler:
    def __init__(self, fileName):
        self.__fileName = fileName

    def addError(self, line=None, description=None):
        print("[ERROR] %s(%s): %s" % (self.__fileName, line, description))

def checkFile(file, root):

    f = open(file, 'r')
    contents = f.read()
    f.close()

    lines = contents.split()
    relPath = os.path.relpath(file, root)
    errorHandler = FileErrorHandler(file)

    CheckPackageMatchFolder(contents, lines, relPath, errorHandler).check()
    CheckJavaOuterClassname(contents, lines, relPath, errorHandler).check()
    CheckMessageMatchesFileName(contents, lines, relPath, errorHandler).check()

def checkFilesInFolder(folder):

    logger.info("Checking all files in folder %s", folder)

    protoFiles = getProtoFilesRecursive(folder)
    for f in protoFiles:
        checkFile(f, folder)

def checkFilesInMultipleRoots(rootFolder):

    logger.info("Searching for RST roots in %s", rootFolder)

    rootCandidates = os.listdir(rootFolder)
    roots = []
    for candidate in rootCandidates:
        if os.path.isdir(os.path.join(rootFolder, candidate)) and candidate != ".svn":
            roots.append(os.path.join(rootFolder, candidate))

    logger.info("Found RST roots %s", roots)

    for root in roots:
        checkFilesInFolder(root)

if __name__ == '__main__':

    logging.basicConfig(level=logging.DEBUG)

    checkFilesInMultipleRoots(sys.argv[1])
