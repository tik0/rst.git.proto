import sys
import pkgutil

import rst
import rstsandbox
import logging

logger = logging.getLogger("rstsandbox")

def addSandboxToRST():
    def importIt(designator, error = True):
        if hasattr(designator, '__iter__'):
            name = '.'.join(designator)
        else:
            name = designator
        try:
            return __import__(name, fromlist = [ '__dict__' ]) # WT?
        except Exception, e:
            if error:
                raise e

    # Find two things within the sandbox:
    # + All Modules (since there should be no duplicates between rst
    #   and rstsandbox)
    # + Packages which do not have a corresponding package relative to
    #   the rst package.
    #   E.g. rstsandbox.communicationpatterns when there is no
    #   rst.communicationpatterns
    # We record errors caused by dependency problems so the caller can
    # trigger additional iterations to resolve dependencies.
    def findModules(root):
        result, errors = [], []
        for _, name, ispkg in pkgutil.iter_modules(root.__path__):
            fullname = root.__name__ + '.' + name
            if ispkg:
                kind = 'package'
            else:
                kind = 'module'
            logger.debug("Processing %s %s.%s", kind, root, name)
            logger.debug('Importing %s', fullname)
            try:
                loaded = importIt(name)
                logger.debug('Loaded %s', loaded)
                if ispkg and importIt([ 'rst' ] + name.split('.')[1:], error = False):
                    logger.debug('%s is a package which also exists under rst', fullname)
                    subresult, suberrors = findModules(loaded, errors)
                    result.extend(subresult)
                    errors.extend(suberrors)
                else:
                    result.append(loaded)
            except Exception, e:
                errors.append(name)
                logger.warn('Failed to load %s: %s', name, e)
        return result, errors

    # Process packages and modules that are present in the sandbox,
    # but not in the stable section:
    # + Add package or module to respective parent package. This
    #   corresponds to "mounting" the entire module tree rooted at the
    #   particular package under the parent package in the stable
    #   section.
    # + Add to sys.modules
    modules, errors = findModules(rstsandbox)
    for module in modules:
        components = module.__name__.split('.')
        rstPackage = importIt([ 'rst' ] + components[1:-1])
        rstName    = 'rst.' + '.'.join(components[1:])
        logger.debug('Mounting %s -> %s', module.__name__, rstName)

        sys.modules[rstName] = module
        rstPackage.__dict__[components[-1]] = module

    return modules, errors

# We need multiple iterations to resolve dependencies since sandbox
# types may depend on each other. Since we do not attempt to load the
# modules in a dependency-respecting order, some modules may initially
# fail to load but succeed later, after their dependencies have been
# loaded.
_, initial = addSandboxToRST()
while len(initial) > 0:
    _, new = addSandboxToRST()
    if len(new) == len(initial):
        raise RuntimeError, "Unable to install modules/packages %s in rst namespace" \
            % ', '.join(new)
    initial = new
