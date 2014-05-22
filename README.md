repro-ios-sdk
=============

[![Version](http://cocoapod-badges.herokuapp.com/v/Repro/badge.png)](http://cocoadocs.org/docsets/Repro)
[![Platform](http://cocoapod-badges.herokuapp.com/p/Repro/badge.png)](http://cocoadocs.org/docsets/Repro)

This SDK include

* ReproInsight
* ReproSurvey

## Usage

To run the example project; clone the repo, and run `pod install` from the Example directory first.

## Requirements

* AVFoundation.framework
* AWSRuntime.framework
* AWSS3.framework
* AWSSQS.framework
* CoreGraphics.framework
* CoreMedia.framework
* Repro.framework
* UIKit.framework


## Installation

Repro is available through [CocoaPods](http://cocoapods.org), to install
it simply add the following line to your Podfile:

    pod "Repro"


## Manual Installation : ReproInsight

### Download iOS SDK and Unzip

1. Download from [repro-ios-sdk](https://github.com/reproio/repro-ios-sdk/archive/master.zip)
1. Download from [aws-ios-sdk](http://sdk-for-ios.amazonwebservices.com/latest/aws-ios-sdk.zip)

### Add Frameworks

We require these frameworks

* AVFoundation.framework
* AWSRuntime.framework
* AWSS3.framework
* AWSSQS.framework
* CoreGraphics.framework
* CoreMedia.framework
* Repro.framework
* UIKit.framework

Add AWS, Repro, AVFoundation frameworks

![Add Frameworks](assets/insight/frameworks.png)

### Set Build Option

Modify Linker Flags

Open `project > BuilSetting > Linking > Other Linker Flags`

add `-Objc -all_load`

![linker flags](assets/insight/linker_flag.png)


### Add Script to AppDelegate.m

Import `<Repro/ReproInsight.h>` and set `application:didFinishLaunchingWithOptions`

```
#import <Repro/ReproInsight.h>

...

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{

    ...

    [ReproInsight setupWithToken:@"YOUR_APP_TOKEN"];

    ...

}
```

## Manual Installation : ReproSurvey

### Download iOS SDK and Unzip

Download from [repro-ios-sdk](https://github.com/reproio/repro-ios-sdk/archive/master.zip)

### Add Frameworks

We require these frameworks

* CoreGraphics.framework
* Repro.framework
* UIKit.framework

![Add Frameworks](assets/survey/frameworks.png)

### Add Script to AppDelegate.m

Import `<Repro/ReproSurvey.h>` and set `application:didFinishLaunchingWithOptions`

```
#import <Repro/ReproSurvey.h>

...

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{

    ...

    [ReproSurvey setupWithToken:@"YOUR_APP_TOKEN"];

    ...

}
```


Other Usage
-----------

Repro recording process control methods

```
Under writing ...
```

## Author

Repro, Inc.

## License

Copyright Repro, Inc.



