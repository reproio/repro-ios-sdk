//
//  ReproSurvey.h
//  ReproSurvey
//
//  Created by akira on 4/16/14.
//  Copyright (c) 2014 akira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReproSurvey : NSObject

+ (void)setupWithToken:(NSString *)token;

+ (id)sharedInstance;
- (void)loadConfigWithToken:(NSString *)token didFailWithError:(NSError**)error;
- (void)setupLocalNotification;
- (void)startSurveyDidFailWithError:(NSError**)error;

@end
