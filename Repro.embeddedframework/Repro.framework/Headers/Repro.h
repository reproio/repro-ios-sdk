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

@interface Repro : NSObject

// Session (Initialization)
+ (void)setup:(NSString *)token;
+ (NSString *)token;

// Recording
+ (void)startRecording;
+ (void)stopRecording;
+ (void)pauseRecording;
+ (void)resumeRecording;

// Masking
+ (void)mask:(UIView *)view;
+ (void)maskWithRect:(CGRect)rect key:(NSString*)key;
+ (void)unmaskForKey:(NSString*)key;

// Event tracking
+ (void)setUserID:(NSString *)userID;
+ (void)track:(NSString*)name properties:(NSDictionary*)properties;
+ (void)startWebViewTracking:(id)delegate;

// Crash reporting
+ (void)enableCrashReporting;

// Survey
+ (void)survey:(NSError**)error;

// Usability Testing
+ (void)enableUsabilityTesting;

@end

# pragma mark - UIView

@interface UIView (Repro)

@property (nonatomic, readonly) BOOL rpr_shouldMask;

- (void)rpr_mask;

@end
