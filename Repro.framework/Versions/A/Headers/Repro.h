//
//  Repro.h
//  Repro
//
//  Created by akira on 1/27/14.
//  Copyright (c) 2014 akira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Repro : NSObject

@property (nonatomic, assign, readonly) NSUInteger status;

+ (id)sharedInstance;

// configuration
- (void)setToken:(NSString *)token;

// control recorder
- (void)startRecordingDidFailWithError:(NSError**)error;
- (void)stopRecordingDidFailWithError:(NSError**)error;

@end
