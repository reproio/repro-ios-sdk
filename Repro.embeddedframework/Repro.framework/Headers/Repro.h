//
//  Repro iOS SDK
//
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RPREventProperties.h"
#import "RPRUserProfileGender.h"

//! Project version number for Repro.
FOUNDATION_EXPORT double ReproVersionNumber;

//! Project version string for Repro.
FOUNDATION_EXPORT const unsigned char ReproVersionString[];

typedef NS_ENUM(NSInteger, RPRLogLevel) {
    RPRLogLevelDebug,
    RPRLogLevelInfo,
    RPRLogLevelWarn,
    RPRLogLevelError,
    RPRLogLevelNone
};

@interface Repro : NSObject

// Session (Initialization)
+ (void)setup:(NSString *)token;

// User profile
+ (void)setUserID:(NSString *)userID;
+ (NSString *)getUserID;
+ (NSString *)getDeviceID;
+ (void)setStringUserProfile:(NSString*)value forKey:(NSString*)key;
+ (void)setIntUserProfile:(NSInteger)value forKey:(NSString*)key;
+ (void)setDoubleUserProfile:(double)value forKey:(NSString*)key;
+ (void)setDateUserProfile:(NSDate*)value forKey:(NSString*)key;
+ (void)setUserGender:(RPRUserProfileGender)value;
+ (void)setUserEmailAddress:(NSString*)value;

// Event tracking
+ (void)track:(NSString*)name properties:(NSDictionary*)properties;
+ (void)startWebViewTracking:(id)delegate;

// Standard event tracking
+ (void)trackViewContent:(NSString *)contentID properties:(RPRViewContentProperties *)properties;
+ (void)trackSearch:(RPRSearchProperties *)properties;
+ (void)trackAddToCart:(NSString *)contentID properties:(RPRAddToCartProperties *)properties;
+ (void)trackAddToWishlist:(RPRAddToWishlistProperties *)properties;
+ (void)trackInitiateCheckout:(RPRInitiateCheckoutProperties *)properties;
+ (void)trackAddPaymentInfo:(RPRAddPaymentInfoProperties *)properties;
+ (void)trackPurchase:(NSString *)contentID value:(double)value currency:(NSString*)currency properties:(RPRPurchaseProperties *)properties;
+ (void)trackShare:(RPRShareProperties *)properties;
+ (void)trackCompleteRegistration:(RPRCompleteRegistrationProperties *)properties;
+ (void)trackLead:(RPRLeadProperties *)properties;

// Recording
+ (void)forceCaptureOnMainThread;
+ (void)startRecording;
+ (void)stopRecording;
+ (void)pauseRecording;
+ (void)resumeRecording;
+ (void)enableRecordingWhileViewAnimations;
+ (void)disableRecordingWhileViewAnimations;

// Masking
+ (void)mask:(UIView *)view;
+ (void)unmask:(UIView *)view;
+ (void)maskWithRect:(CGRect)rect key:(NSString*)key;
+ (void)unmaskForKey:(NSString*)key;

// Crash reporting
+ (void)enableCrashReporting __attribute__ ((deprecated));

// Log
+ (void)setLogLevel:(RPRLogLevel)level;

// Push Notification
+ (void)setPushDeviceToken:(NSData *)pushDeviceToken;
+ (void)setPushDeviceTokenString:(NSString *)pushDeviceToken;

// In App Message
+ (void)disableInAppMessageOnActive;
+ (void)showInAppMessage;

// Integrations
+ (void)integrateRtoaster:(NSString *)accountID;

@end
