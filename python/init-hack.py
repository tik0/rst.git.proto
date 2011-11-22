import sys
import pkgutil

import rst
import rstsandbox
import logging

logger = logging.getLogger("rstsandbox")

def addSandboxToRST():
    # Find two things within the sandbox
    # + All Modules (since there should be no duplicates between rst
    #   and rstsandbox)
    # + Packages which do not have a corresponding package relative to
    #   the rst package. E.g. rstsandbox.communicationpatterns when
    #   there is no rst.communicationpatterns
    def findModules(root, errorList = []):
        def existsInRST(name):
            try:
                __import__('rst.' + '.'.join(name.split('.')[1:]))
                return True
            except:
                return False
        result = []
        for importer, modname, ispkg in pkgutil.iter_modules(root.__path__):
            if root.__name__ == modname:
                continue
            logger.debug("Processing %s.%s (package: %s)", root, modname, ispkg)
            logger.debug('  Importing %s', root.__name__ + '.' + modname)
            try:
                name = root.__name__ + '.' + modname
                loaded = __import__(name, fromlist = [ '__dict__' ]) # WTF?
                logger.debug('  Loaded %s', loaded)
                if ispkg and existsInRST(name):
                    logger.debug('  Is a package and exists in RST')
                    result.extend(findModules(loaded, errors))
                else:
                    result.append(loaded)
            except Exception, e:
                errorList.append(name)
                logger.debug('  Warning: failed to load %s', modname)
        return result

    # process packages and modules that are present in the sandbox,
    # but not in the stable section:
    # + Add package or module to respective parent package
    # + Add to sys.modules
    errors = []
    for module in findModules(rstsandbox, errors):
        try:
            components = module.__name__.split('.')
            rstPackage = __import__('rst.' + '.'.join(components[1:-1]), fromlist = [ '__dict__' ])
            rstName = 'rst.' + '.'.join(components[1:])
            logger.debug('Adding %s -> %s ; RST Package: %s', module.__name__, rstName, rstPackage)

            sys.modules[rstName] = module
            rstPackage.__dict__[components[-1]] = module
        except Exception, e:
            logger.debug('warning: failed to copy %s', module)

    return errors

# We need multiple iterations to resolve dependencies ...
initial = addSandboxToRST()
while len(initial) > 0:
    new = addSandboxToRST()
    if len(new) == len(initial):
        logger.error("Unable to instal modules %s in rst namespace" % new)
    initial = new
