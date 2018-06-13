#!/bin/sh

echo "Only for userdebug"

adb root

adb shell am start -n com.smartisanos.setupwizard/com.smartisanos.setupwizard.SetupWizardCompleteActivity
