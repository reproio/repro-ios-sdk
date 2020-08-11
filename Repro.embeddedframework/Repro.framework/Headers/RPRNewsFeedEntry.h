//
//  Repro iOS SDK
//
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RPRNewsFeedEntry : NSObject

@property (nonatomic, readonly)           uint64_t ID;
@property (nonatomic, readonly)           NSString *deviceID;
@property (nonatomic, readonly)           NSString *title;
@property (nonatomic, readonly)           NSString *summary;
@property (nonatomic, readonly)           NSString *body;
@property (nonatomic, readonly, nullable) NSURL *linkUrl;
@property (nonatomic, readonly, nullable) NSURL *imageUrl;
@property (nonatomic, readonly)           NSDate *deliveredAt;
@property (nonatomic)                     BOOL shown;
@property (nonatomic)                     BOOL read;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
