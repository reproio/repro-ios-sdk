repro-ios-sdk
=============

[![Version](http://cocoapod-badges.herokuapp.com/v/Repro/badge.png)](http://cocoadocs.org/docsets/Repro)
[![Platform](http://cocoapod-badges.herokuapp.com/p/Repro/badge.png)](http://cocoadocs.org/docsets/Repro)

[Repro](https://www.repro.io) provide analytics and reproduce user behavior.

Insight feature image | Survey feature image
--- | ---
![ReproInsight](assets/insight/ReproInsight.gif) | ![ReproSurvey](assets/survey/ReproSurvey.gif)

## Work limitation

If user access with out of limitation device or network,
don't startup "Repro" process only. Not affected.

### Repro SDK version limitation

~> 0.2.3

### Device limitation

Device | Value
------ | -----
iPhone | >= iPhone 5
iPod   | >= iPod Touch 5G
iPad   | >= iPad 4, iPad Air, iPad mini (Retina)

### Network limitation

Network | Work    | Annotation
------  | ----    | ----------
~> 3G   | disable |
4G      | enable  |
LTE     | enable  |
Wifi    | enable  |
3G/LTE  | enable  | When hidden status bar
Unknown | disable |

## Usage

To run the example project; clone the repo, and run `pod install` from the Example directory first.

## Requirement Frameworks

* AVFoundation.framework
* CoreGraphics.framework
* CoreMedia.framework
* CoreVideo.framework
* Repro.framework
* UIKit.framework

## Integrate with cocoapods

Repro is available through [CocoaPods](http://cocoapods.org), to install
it simply add the following line to your Podfile:

    pod "Repro"

Edge version

    pod "Repro", git: 'git@github.com:reproio/repro-ios-sdk.git'

## Integrate manually

Visit here <http://doc.repro.io>

- [Integrate manually](http://doc.repro.io/integration/native##integrate-manually)

## Your first recording

After succeeded to install, try your first recording!

- [Your first recording](http://doc.repro.io/integration/native##your-first-recording)

# Other Usage

Read the SDK document for further information <http://doc.repro.io>

API

- [Recording](http://doc.repro.io/ios/api/screen-recording/)
- [Masking](http://doc.repro.io/ios/api/masking/)
- [User ID](http://doc.repro.io/ios/api/user-id/)
- [Track events](http://doc.repro.io/ios/api/track/)
- [Crash reporting](http://doc.repro.io/ios/api/crash-reporting/)
- [Survey](http://doc.repro.io/ios/api/survey/)

## Author

Repro, Inc.

## License

(c) 2014 Repro Inc.



