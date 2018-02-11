//
//  Repro.h
//  Repro
//
//  Created by Masahiro Hayashi on 9/17/14.
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

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

// Event tracking
+ (void)track:(NSString*)name properties:(NSDictionary*)properties;
+ (void)startWebViewTracking:(id)delegate;

// Recording
+ (void)startRecording;
+ (void)stopRecording;
+ (void)pauseRecording;
+ (void)resumeRecording;

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
