//
//  Repro iOS SDK
//
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, RPRCampaignType) {
    RPRCampaignTypeUnknown          NS_SWIFT_NAME(unknown)          = 0,

    RPRCampaignTypePushNotification NS_SWIFT_NAME(pushNotification) = (1 << 0),
    RPRCampaignTypeInAppMessage     NS_SWIFT_NAME(inAppMessage)     = (1 << 1),
    RPRCampaignTypeWebMessage       NS_SWIFT_NAME(webMessage)       = (1 << 2),
    RPRCampaignTypeAll              NS_SWIFT_NAME(all)              = (1 << 3),
};

NS_ASSUME_NONNULL_BEGIN

@interface RPRNewsFeedEntry : NSObject

@property (nonatomic, readonly)           uint64_t ID;
@property (nonatomic, readonly)           NSString *deviceID;
@property (nonatomic, readonly)           NSString *title;
@property (nonatomic, readonly)           NSString *summary;
@property (nonatomic, readonly)           NSString *body;
@property (nonatomic, readonly)           RPRCampaignType campaignType;
@property (nonatomic, readonly, nullable) NSURL *linkUrl;
@property (nonatomic, readonly, nullable) NSURL *imageUrl;
@property (nonatomic, readonly)           NSDate *deliveredAt;
@property (nonatomic)                     BOOL shown;
@property (nonatomic)                     BOOL read;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
