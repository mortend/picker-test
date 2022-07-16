#!/bin/sh
# This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" .
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.app"
    "/Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/bin/uno.js" adb uninstall "com.apps.app"
    exit $?
    ;;
esac

##if #(LIBRARY:Defined)
#echo "ERROR: #(Product) is a library and cannot be run directly." >&2
#exit 1
##else
"/Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/bin/uno.js" launch-apk "app.apk" \
    --package=com.apps.app \
    --activity=app \
    --sym-dir="app/src/main/.uno" \
     \
    "$@"
##endif
