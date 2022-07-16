#!/bin/sh
# This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

##if !#(SDK.Directory:IsSet) || !#(NDK.Directory:IsSet)
#echo "ERROR: Could not locate the Android SDK or NDK." >&2
#echo "" >&2
#echo "These dependencies can be acquired by installing 'android-build-tools':" >&2
#echo "" >&2
#echo "    npm install android-build-tools#1.x -g" >&2
#echo "" >&2
#echo "After installing, pass --force to make sure the new configuration is picked up." >&2
#echo "" >&2
#echo "    uno build android --force" >&2
#echo "" >&2
#exit 1
##endif

##if #(JDK.Directory:IsSet)
export JAVA_HOME="/Applications/Android Studio 2021.1.1.app/Contents/jre/Contents/Home"
##endif

./gradlew assembleDebug "$@"

##if #(LIBRARY:Defined)
#ln -sf #(Outputs.AAR:QuoteSpace) #(Product:QuoteSpace)
##else
ln -sf app/build/outputs/apk/debug/app-debug.apk app.apk
## if !#(DEBUG:Defined)
#./gradlew #(Gradle.BundleTask)
#ln -sf #(Outputs.Bundle:QuoteSpace) #(Bundle:QuoteSpace)
## endif
##endif
