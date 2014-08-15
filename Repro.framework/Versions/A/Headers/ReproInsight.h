//
//  ReproInsight.h
//  ReproInsith
//
//  Created by akira on 1/27/14.
//  Copyright (c) 2014 akira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReproInsight : NSObject

@property (nonatomic, retain, readwrite) NSString *token;
@property (nonatomic, assign, readonly) NSUInteger status;

+ (void)setupWithToken:(NSString *)token;
+ (id)sharedInstance;
+ (void)setUserAnnotation:(NSString *)userAnnotation;
+ (void)pause;
+ (void)resume;
+ (void)addMaskingWithRect:(CGRect)rect WithKey:(NSString*)key;
+ (void)removeMaskingWithKey:(NSString*)key;
+ (void)track:(NSString*)name properties:(NSDictionary*)properties;
+ (void)enableCrashReporting;
+ (void)disableCrashReporting;

// control recorder
- (void)configureWithToken:(NSString *)token didFailWithError:(NSError **)error;
- (void)startRecordingDidFailWithError:(NSError**)error;
- (void)stopRecordingDidFailWithError:(NSError**)error;
- (void)sendCrashReport:(NSException*)exception;
@end

# pragma mark - UIView

@interface UIView (RPRIS)

@property (nonatomic, strong, readonly) NSNumber *rpris_mask;

- (void)rpris_masking;
- (BOOL)rpris_isPrivacy;

@end
