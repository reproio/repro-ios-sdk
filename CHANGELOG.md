# 2.2.2 (2017/02/15)

## New Feature

- Dialog message has a new layout with [just an image](http://docs.repro.io/en/dashboard/campaign/in-app-message.html#dialog-image-only)

## Improvements

- Add length validation for the User ID and the application version name
  - User ID can go up to 191 characters; please note that everything from the 192th character it will be truncated.
  - App Version name can go up to 32 characters; please note that everything from the 33th character will be truncated.

- Change the first argument of `setIntUserProfile:forKey:` from `int` to `NSInteger`
  - You don’t need to fix your source code if you’re using Objective-C
  - If you’re using Swift and is passing `Int32` type value as the first argument, you need to convert it to `Int`

    ```diff
    let age:Int32 = 25;
    - Repro.setUserProfile(age, forKey:"age");
    + Repro.setUserProfile(Int(age), forKey:"age");
    ```

# 2.1.12 (2016/11/17)

## Fixed

- Fixed the bug where the masking comes sporadically off for an instant right after the web page is loaded

# 2.1.3 (2016/10/13)

## Fixed

- Fixed the bug where CTA URL that contains hash(#) mark is encoded improperly

# 2.1.0 (2016/10/05)

## New

- Enable to open Deep Link or Web URL by opening Push Notification
- Track Push Notification when the application uses UserNotifications framework

## Fixed

- Fixed the bug where Push Notification was not tracked properly

# 2.0.9 (2016/09/13)

## Changes

- User Face Recording feature is removed
- Change default log level to Error

## Fixed

- Fix the bug where the 'Call To Action' event was tracked incorrectly when Banner message was dismissed

# 2.0.6 (2016/09/09)

## Changes

- Use `openURL:options:completionHandler:` when opening a web page on iOS 10

## Fixed

- Rename `track:` method for preventing Apple's static analyzer detects it is a non-public API

# 2.0.4 (2016/08/26)

## Fixed

- Fix the bug where masking feature for UIWebView/WKWebView didn't work correctly

# 2.0.0 (2016/08/16)

**The special step is required to upgrade the SDK. Please read our [Upgrade Guide](http://docs.repro.io/en/dev/sdk/upgrade/ios.html#upgrading-to-ios-2-0-0).**

## New
- Add following APIs
  - `setIntUserProfile:(int)value forKey:(NSString*)key`
  - `setDoubleUserProfile:(double)value forKey:(NSString*)key`
  - `setDateUserProfile:(NSDate*)value forKey:(NSString*)key`

## Changes

- `setUserProfile:(NSString*)value forKey:(NSString*)key` and `setUserProfile:(NSDictionary *)profile` was removed. Use `setStringUserProfile:(NSString*)value forKey:(NSString*)key` instead

## Fixed

- Fix the some layout issue of the In-App message

# 1.7.34 (2016/07/20)

## Improved

- Save the session and the movie file even if the application had been terminated by double-clicking the Home button and swiping up the application

# 1.7.30 (2016/06/21)

## Improved

- Clear the masks for UIWebView/WKWebView when it transit to the other page

## Fixed

- Fix the rare crash when writing log
- Fix the bug where building the app is failed in some case
- Fix the some layout issue of the In-App message

# 1.7.25 (2016/06/16)

**If you are using WebView tracking and/or masking, the special step is required to upgrade the SDK. Please read our [Upgrade Guide](http://docs.repro.io/en/dev/sdk/upgrade/ios.html#upgrading-to-1-7-25).**

## Improved

- Show the progress dialog while loading the image of the In-App message
- Track WebView event called from immediate function of JavaScript

# 1.7.19 (2016/06/01)

## Changes

- Deprecate `enableCrashReporting` API

# 1.7.16 (2016/05/18)

## Fixed

- Fix the crash when showing In-App Message with image

# 1.7.15 (2016/05/17)

## New

- Add `getDeviceID` and `getUserID` API

## Improved

- Limit the length of user profile key and value
- Track In-App Message ID even if the app was killed after showing the Message
- Track CTA event if CTA URL is not specified

# 1.7.9 (2016/04/15)

## Fixed

- Reduced the possibility to deliver in-app messages already shown

# 1.7.6 (2016/04/11)

## Improvements

- Improves the reliability of masking
- Improves the reliability of event tracking

# 1.7.3 (2016/03/24)

## Fixed

- Fixed delay of session data uploads
- Reduced the possibility to deliver in-app messages already shown
- Fixed in-app message's default orientation for the app has no device orientation setting

# 1.7.0 (2016/03/11)

## Feature

- Enable to show in-app message when tracking event

# 1.6.4 (2016/03/07)

## Bug Fix

- Fix a rare crash when crash reporter catches signals

# 1.6.0 (2016/03/03)

## Feature

- Add Masking API for UIWebView & WKWebView

## Bug Fixes

- Fix build warning when integrating the SDK
- Reduce the possibility to upload duplicate session data
- Reduce the possibility of crashing while masking

# 1.5.1 (2016/02/21)

## Improvements

- New In-App Message
  - Enables to choose Dialog type
  - Enables to use two buttons in message

## Changes

- Removes deprecated APIs

# 1.4.27 (2016/02/11)

## Changes

- Limit event name length and event properties type

# 1.4.22 (2016/1/3)

## Improvements

- Improves the reliability of uploading

## Bug Fixes

- Fixes the bug where screen recording fails when the user denies accessing to camera
- Fixes the issue that causes a crash if the app uses Localytics
- Fixes the bug of UI event tracking (private beta feature)

# 1.4.14 (2015/12/17)

## Bug Fixes

- Fixes the issue that causes a crash if the app uses Apptimize
- Fixes the bug of User Profile API for C++
- Fixes event tracking API to support i18n

# 1.4.9 (2015/12/12)

## Enhancements

- Supports landscape mode for in-app message
- Enables to use large size image for in-app message
- Adds user profile api for c++ app

## Bug Fixes

- Enables to use Japanese texts in CTA of in-app message

## Deprecated

- Usability Testing is deprecated

# 1.4.0 (2015/11/30)

## User Profiles

- You can segment the group of users with these profiles when sending push notifications or in-app messages by setting user profiles. [See the doc for more details](http://docs.repro.io/en/api/user-profile.html)

## Bug Fixes

- Fixes unintentional automatic event tracking
- Fixes potential crashes when stopping session
- Fixes the bug where a session occasionally starts even if Repro is not activated on the dashboard

# 1.3.23 (2015/11/2)

## Bug fixes

- Fix the bug where it rarely crashes right after the app goes to the background.
- Fix the bug where session is sometimes not uploaded on iOS 6.

# 1.3.19 (2015/10/21)

## Improvements

- Removed Reachability
  - Removed the dependency to Reachability due to some bugs being reported on iOS 9.
  - **Attention:** Instead of using Reachability, Repro SDK now depends on `CoreTelephony.framework`. Don't forget to add it to Linked Frameworks and Libraries!
- Load Web View Tracker from SDK
  - Changed to load event tracker for web view (JavaScript) within SDK in order to prevent causing unintentional access to `repro://`.

# 1.3.15 (2015/10/09)

## Support iOS 6 Again

### Notice

- Recording and usability testing are not supported on iOS 6

# 1.3.14 (2015/10/06)

## Bug Fix

- Fix the bug where event properties are not saved.

# 1.3.13 (2015/10/02)

## Bug Fixes

- Fix build failure where the app is build for simulator by Xcode 6
- Reduce possibility of crashing while recording

# 1.3.10 (2015/09/29)

## Improvements

- Fix time offset of tracking data when the device's clock is not correct
- Make a user ID persistent

## Bug Fixes

- Fix crashing when tracking is disabled or reached data point limitation
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
- Fix the bug of recordability control while scrolling

# 0.10.4.1 (2015/07/21)

- Hot fix for Push notification

# 0.10.4 (2015/07/20)

- Push notification

# 0.9.11 (2015/06/26)

- Fixes a bug which the session doesn't start when app takes much time to start

# 0.9.8 (2015/06/19)

- Improves reliability of recording:
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
- Fixes crashing when rotating device while usability testing
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
