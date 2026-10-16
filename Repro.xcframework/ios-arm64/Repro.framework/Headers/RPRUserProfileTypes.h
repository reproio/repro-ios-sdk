//
//  Repro iOS SDK
//
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, RPRUserProfileGender) {
    RPRUserProfileGenderOther    NS_SWIFT_NAME(other) = 0,
    RPRUserProfileGenderMale     NS_SWIFT_NAME(male),
    RPRUserProfileGenderFemale   NS_SWIFT_NAME(female)
};

typedef NS_ENUM(NSInteger, RPRUserProfilePrefecture) {
    RPRUserProfilePrefectureHokkaido    NS_SWIFT_NAME(hokkaido) = 1,
    RPRUserProfilePrefectureAomori      NS_SWIFT_NAME(aomori),
    RPRUserProfilePrefectureIwate       NS_SWIFT_NAME(iwate),
    RPRUserProfilePrefectureMiyagi      NS_SWIFT_NAME(miyagi),
    RPRUserProfilePrefectureAkita       NS_SWIFT_NAME(akita),
    RPRUserProfilePrefectureYamagata    NS_SWIFT_NAME(yamagata),
    RPRUserProfilePrefectureFukushima   NS_SWIFT_NAME(fukushima),
    RPRUserProfilePrefectureIbaraki     NS_SWIFT_NAME(ibaraki),
    RPRUserProfilePrefectureTochigi     NS_SWIFT_NAME(tochigi),
    RPRUserProfilePrefectureGunma       NS_SWIFT_NAME(gunma),
    RPRUserProfilePrefectureSaitama     NS_SWIFT_NAME(saitama),
    RPRUserProfilePrefectureChiba       NS_SWIFT_NAME(chiba),
    RPRUserProfilePrefectureTokyo       NS_SWIFT_NAME(tokyo),
    RPRUserProfilePrefectureKanagawa    NS_SWIFT_NAME(kanagawa),
    RPRUserProfilePrefectureNiigata     NS_SWIFT_NAME(niigata),
    RPRUserProfilePrefectureToyama      NS_SWIFT_NAME(toyama),
    RPRUserProfilePrefectureIshikawa    NS_SWIFT_NAME(ishikawa),
    RPRUserProfilePrefectureFukui       NS_SWIFT_NAME(fukui),
    RPRUserProfilePrefectureYamanashi   NS_SWIFT_NAME(yamanashi),
    RPRUserProfilePrefectureNagano      NS_SWIFT_NAME(nagano),
    RPRUserProfilePrefectureGifu        NS_SWIFT_NAME(gifu),
    RPRUserProfilePrefectureShizuoka    NS_SWIFT_NAME(shizuoka),
    RPRUserProfilePrefectureAichi       NS_SWIFT_NAME(aichi),
    RPRUserProfilePrefectureMie         NS_SWIFT_NAME(mie),
    RPRUserProfilePrefectureShiga       NS_SWIFT_NAME(shiga),
    RPRUserProfilePrefectureKyoto       NS_SWIFT_NAME(kyoto),
    RPRUserProfilePrefectureOsaka       NS_SWIFT_NAME(osaka),
    RPRUserProfilePrefectureHyogo       NS_SWIFT_NAME(hyogo),
    RPRUserProfilePrefectureNara        NS_SWIFT_NAME(nara),
    RPRUserProfilePrefectureWakayama    NS_SWIFT_NAME(wakayama),
    RPRUserProfilePrefectureTottori     NS_SWIFT_NAME(tottori),
    RPRUserProfilePrefectureShimane     NS_SWIFT_NAME(shimane),
    RPRUserProfilePrefectureOkayama     NS_SWIFT_NAME(okayama),
    RPRUserProfilePrefectureHiroshima   NS_SWIFT_NAME(hiroshima),
    RPRUserProfilePrefectureYamaguchi   NS_SWIFT_NAME(yamaguchi),
    RPRUserProfilePrefectureTokushima   NS_SWIFT_NAME(tokushima),
    RPRUserProfilePrefectureKagawa      NS_SWIFT_NAME(kagawa),
    RPRUserProfilePrefectureEhime       NS_SWIFT_NAME(ehime),
    RPRUserProfilePrefectureKochi       NS_SWIFT_NAME(kochi),
    RPRUserProfilePrefectureFukuoka     NS_SWIFT_NAME(fukuoka),
    RPRUserProfilePrefectureSaga        NS_SWIFT_NAME(saga),
    RPRUserProfilePrefectureNagasaki    NS_SWIFT_NAME(nagasaki),
    RPRUserProfilePrefectureKumamoto    NS_SWIFT_NAME(kumamoto),
    RPRUserProfilePrefectureOita        NS_SWIFT_NAME(oita),
    RPRUserProfilePrefectureMiyazaki    NS_SWIFT_NAME(miyazaki),
    RPRUserProfilePrefectureKagoshima   NS_SWIFT_NAME(kagoshima),
    RPRUserProfilePrefectureOkinawa     NS_SWIFT_NAME(okinawa),
};
