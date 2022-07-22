//
//  Repro iOS SDK
//
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <Repro/RPREventProperties.h>
#import <Repro/RPRUserProfileGender.h>
#import <Repro/RPRRemoteConfig.h>
#import <Repro/RPRNewsFeedEntry.h>

@protocol WKNavigationDelegate;

//! Project version number for Repro.
FOUNDATION_EXPORT double ReproVersionNumber;

//! Project version string for Repro.
FOUNDATION_EXPORT const unsigned char ReproVersionString[];

typedef NS_ENUM(NSInteger, RPRLogLevel) {
    RPRLogLevelDebug NS_SWIFT_NAME(debug),
    RPRLogLevelInfo  NS_SWIFT_NAME(info),
    RPRLogLevelWarn  NS_SWIFT_NAME(warn),
    RPRLogLevelError NS_SWIFT_NAME(error),
    RPRLogLevelNone  NS_SWIFT_NAME(none)
};

@interface Repro : NSObject

// Session (Initialization)
+ (void)setup:(nonnull NSString *)token
NS_SWIFT_NAME(setup(token:));


// OptIn / OptOut
+ (void)optIn:(BOOL)endUserOptedIn
NS_SWIFT_NAME(optIn(endUserOptedIn:));


// User profile
+ (void)setUserID:(nonnull NSString *)userID
NS_SWIFT_NAME(set(userID:));

+ (nonnull NSString *)getUserID
NS_SWIFT_NAME(userID());

+ (nullable NSString *)getDeviceID
NS_SWIFT_NAME(deviceID());

+ (void)setStringUserProfile:(nonnull NSString *)value forKey:(nonnull NSString *)key
NS_SWIFT_NAME(setUserProfile(stringValue:forKey:));

+ (void)setIntUserProfile:(NSInteger)value forKey:(nonnull NSString *)key
NS_SWIFT_NAME(setUserProfile(integerValue:forKey:));

+ (void)setDoubleUserProfile:(double)value forKey:(nonnull NSString *)key
NS_SWIFT_NAME(setUserProfile(doubleValue:forKey:));

+ (void)setDateUserProfile:(nonnull NSDate *)value forKey:(nonnull NSString *)key
NS_SWIFT_NAME(setUserProfile(dateValue:forKey:));

+ (void)setUserGender:(RPRUserProfileGender)value
NS_SWIFT_NAME(setUserProfile(gender:));

+ (void)setUserEmailAddress:(nonnull NSString *)value
NS_SWIFT_NAME(setUserProfile(emailAddress:));


// Event tracking
+ (void)track:(nonnull NSString *)name
NS_SWIFT_NAME(track(event:));

+ (void)track:(nonnull NSString *)name properties:(nullable NSDictionary *)properties
NS_SWIFT_NAME(track(event:properties:));

+ (void)startWebViewTracking:(nonnull id<WKNavigationDelegate>)delegate
NS_SWIFT_NAME(startWebViewTracking(delegate:));


// Standard event tracking
+ (void)trackViewContent:(nonnull NSString *)contentID properties:(nullable RPRViewContentProperties *)properties
NS_SWIFT_NAME(trackViewContentEvent(contentID:properties:));

+ (void)trackSearch:(nullable RPRSearchProperties *)properties
NS_SWIFT_NAME(trackSearchEvent(properties:));

+ (void)trackAddToCart:(nonnull NSString *)contentID properties:(nullable RPRAddToCartProperties *)properties
NS_SWIFT_NAME(trackAddToCartEvent(contentID:properties:));

+ (void)trackAddToWishlist:(nullable RPRAddToWishlistProperties *)properties
NS_SWIFT_NAME(trackAddToWishlistEvent(properties:));

+ (void)trackInitiateCheckout:(nullable RPRInitiateCheckoutProperties *)properties
NS_SWIFT_NAME(trackInitiateCheckoutEvent(properties:));

+ (void)trackAddPaymentInfo:(nullable RPRAddPaymentInfoProperties *)properties
NS_SWIFT_NAME(trackAddPaymentInfoEvent(properties:));

+ (void)trackPurchase:(nonnull NSString *)contentID value:(double)value currency:(nonnull NSString *)currency properties:(nullable RPRPurchaseProperties *)properties
NS_SWIFT_NAME(trackPurchaseEvent(contentID:value:currency:properties:));

+ (void)trackShare:(nullable RPRShareProperties *)properties
NS_SWIFT_NAME(trackShareEvent(properties:));

+ (void)trackCompleteRegistration:(nullable RPRCompleteRegistrationProperties *)properties
NS_SWIFT_NAME(trackCompleteRegistrationEvent(properties:));

+ (void)trackLead:(nullable RPRLeadProperties *)properties
NS_SWIFT_NAME(trackLeadEvent(properties:));


// Log
+ (void)setLogLevel:(RPRLogLevel)level
NS_SWIFT_NAME(set(logLevel:));


// Push Notification
+ (void)setPushDeviceToken:(nonnull NSData *)pushDeviceToken
NS_SWIFT_NAME(setPushDeviceToken(data:));

+ (void)setPushDeviceTokenString:(nonnull NSString *)pushDeviceToken
NS_SWIFT_NAME(setPushDeviceToken(string:));


// In App Message

+ (void)enableInAppMessagesOnForegroundTransition
NS_SWIFT_NAME(enableInAppMessagesOnForegroundTransition());

+ (void)disableInAppMessagesOnForegroundTransition
NS_SWIFT_NAME(disableInAppMessagesOnForegroundTransition());

// Silver Egg In-app
+ (void)setSilverEggCookie:(nonnull NSString *)silverEggCookie
NS_SWIFT_NAME(set(silverEggCookie:));

+ (void)setSilverEggProdKey:(nonnull NSString *)silverEggProdKey
NS_SWIFT_NAME(set(silverEggProdKey:));


// Event Callbacks

+ (void)addOpenUrlFilterRegEx:(nonnull NSString *)filterRegEx
NS_SWIFT_NAME(add(openUrlFilterRegEx:));

+ (void)setOpenUrlCallback:(void(^ _Nullable)(NSURL * _Nonnull url))callback
NS_SWIFT_NAME(setOpenUrlCallback(_:));


// Remote Configuration
@property (class, nonatomic, readonly, nonnull) RPRRemoteConfig *remoteConfig;

// NewsFeed
+ (nullable NSArray<RPRNewsFeedEntry *> *)getNewsFeeds:(uint64_t)limit
                                                 error:(NSError * _Nullable * _Nullable)error
NS_SWIFT_NAME(getNewsFeeds(_:));

+ (nullable NSArray<RPRNewsFeedEntry *> *)getNewsFeeds:(uint64_t)limit
                                          campaignType:(RPRCampaignType)campaignType
                                                 error:(NSError * _Nullable * _Nullable)error
NS_SWIFT_NAME(getNewsFeeds(_:campaignType:));

+ (nullable NSArray<RPRNewsFeedEntry *> *)getNewsFeeds:(uint64_t)limit
                                              offsetID:(uint64_t)offsetID
                                                 error:(NSError * _Nullable * _Nullable)error
NS_SWIFT_NAME(getNewsFeeds(_:offsetID:));

+ (nullable NSArray<RPRNewsFeedEntry *> *)getNewsFeeds:(uint64_t)limit
                                              offsetID:(uint64_t)offsetID
                                          campaignType:(RPRCampaignType)campaignType
                                                 error:(NSError * _Nullable * _Nullable)error
NS_SWIFT_NAME(getNewsFeeds(_:offsetID:campaignType:));

+ (BOOL)updateNewsFeeds:(nonnull NSArray<RPRNewsFeedEntry *> *)newsFeeds error:(NSError * _Nullable * _Nullable)error
NS_SWIFT_NAME(updateNewsFeeds(_:));

@end
