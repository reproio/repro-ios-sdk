# 1.3.14 (2015/10/06)

## Bug Fix

- Fix the bug where event properties are not saved.

# 1.3.13 (2015/10/02)

## Bug Fixes

- Fix build failure where the app is build for simulator by Xcode 6
- Reduce possibility of crashing while recording

# 1.3.10 (2015/09/29)

## Improvemets

- Fix time offset of tracking data when the device's clock is not correct
- Make a user ID perisistant

## Bug Fixes

- Fix the bug crashing where when tracking is disabled or reached data point limitation
- Suppress warning messages when the app is uploaded to AppStore
- Fix the bug where recording is paused unexpectedly when using deep linking
- Suppress 101 error while web view tracking

# 1.2.10.1 (2015/09/10)

## Hotfix

- Fixes the bug where uploading the app to AppStore fails because of ReproSDKResources

# 1.2.10 (2015/09/08)

## Feature

- iOS 9 support
  - Bitcode
    - Enables Bitcode
  - ATS
    - Fix uploading
    - **Attention:** In-app message and web view tracking won't work on iOS 9 until Oct 1 if your app enables ATS.
  - Split screen multitasking
    - Fix screen recording

## Improvement

- Major improvement for uploading
  - **Attention:** MobileCoreServices.framework is required from this version
- In-app message API for c++ application

## Bug Fix

- Fixes the bug where in-app message sometimes not displaying
- Fixes the bug where it sometimes fails to track touches
- Fixes the bug where Usability testing doesn't work for some localization settings.

# 1.0.5 (2015/08/17)

- In-app message
- Remove iOS 6 support
- Remove dependency to `-ObjC` linker flag
- Fix the bug of recorability control while scrolling

# 0.10.4.1 (2015/07/21)

- Hot fix for Push notification

# 0.10.4 (2015/07/20)

- Push notification

# 0.9.11 (2015/06/26)

- Fixes a bug which the session doesn't start when app takes much time to start

# 0.9.8 (2015/06/19)

- Improves reliablity of recording:
  - Fixes a bug where calling recording APIs in a series was causing incorrect behavior.
  − Fixes automatic pause recording when opening web site
- Fixes a bug where a session didn't work when `enableUsabilityTesting` was called but there is no available usability testing on admin page.

# 0.9.7 (2015/05/17)

- Enables to pause screen recording while scrolling
- Fixes screen recording while showing customized UIWindow
- Fixes OS version to include patch version
- Changes arrow mark's color of Usability testing view

# 0.8.0 (2015/04/27)

- Pause automatically when openURL is called
- Limits pause duration to 2.5 min
- Adds support for armv7s
- Reduces uploading interval
- Fixes crashing when fps is set to 1
- Fixes crashing when rotating device while usabiliy testing
- Fixes usability testing's next button not displayed

# 0.4.7 (2015/04/02)

- Bug fix
	- Screen recording doesn't work during UsabilityTesting

# 0.4.6 (2015/03/28)

- Enables to track events in WKWebView
- Improves usability testing
	- Adjusts layout with landscape orientation
- Improves configuration
	- Retries configuration when it failed
- Fixes some bugs of masking and recording

# 0.4.5 (2015/03/05)

- Improves recording performance

# 0.4.4 (2015/02/27)

- Bug fix

# 0.4.3

- Improve recording
  - Adds pause/resume feature for face recording
  - Reduces screen movie's file size
  - Stops recording when received memory warning
- Improve security
  - Masks input field automatically
  - Adds unmask API
- Enables to set log level
- Improves crash reporting
  - Catches signals

# 0.4.2

- Improves reliability of file uploading

# 0.4.1

- Improves security
  - Prohibits recording Camera Roll
- Improves reliability of usability testing

# 0.4.0

- Improves reliability of screen recording
- Improves reliability of usability testing

# 0.3.9

- Support Cordova
- Support Cocos2d-x
- Unsupport armv7s
- Improves reliability of detecting device orientation

# 0.3.8

- Improves reliability of crash reporting
- Improves reliability of survey

# 0.3.7

- Support armv7s
- Fix build error of the apps depends on C++ libraries

# 0.3.6

## Usability Testing

- This release Adds Usability Testing feature
    - For more detailed information, please visit: http://doc.repro.io/ios/api/usability-testing
- Improves masking reliability
- Improves reliability of survey API

# 0.3.5

- Fix crashing when touched

# 0.3.4

- Fix some bugs for masking
  - Fix mask color
  - Do not track touches while keyboard is opened for iOS 8

# 0.3.3

- Fix a bug of face recording

# 0.3.2

- Custom confirmation dialog

# 0.3.1

- Fix library link bug

# 0.3.0

Enhancements

- Support iOS 8 & Xcode 6
- Breaking API Changes
  - Changed public header to `Repro.h`
  - See the [doc](http://doc.repro.io) for further information about each API change
- Separate Event tracking & recording
  - Now you can start & stop recording anytime you need
  - Event tracking will start automatically if you enable to Tracking on repro.io website

# 0.2.8

Enhancements

- Track events on UIWebView
- Remove AWS modules
- API change: setUserAnnotation -> setUserID

Bug fix

- Cannot mask visible View's component
- Mask correctly while transition
- Mask correctly while orientation changing

# 0.2.7

Enhancement

- Crash reporting

Bug fix

- Fix the bug on restart of face cam recording

# 0.2.6

Enhancement

- Track custom event
- Track orientation change

Bug fix

- Fix max recording length limitation
- Fix time lag between events and movie

# 0.2.5

- Some Bug fix

# 0.2.4

- Implemented manual masking feature
- Some Bug fix

# 0.2.3

- Implemented Pause / Resume feature
- Implemented User annotation feature
- Some Bug fix

# 0.2.2

- Bug fix

# 0.1.8

release 0.1.8
