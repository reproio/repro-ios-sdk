//
//  Repro iOS SDK
//
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RPRViewContentProperties : NSObject
@property (nonatomic, readwrite) double value;
@property (nonatomic, readwrite, copy) NSString *currency;
@property (nonatomic, readwrite, copy) NSString *contentName;
@property (nonatomic, readwrite, copy) NSString *contentCategory;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end

@interface RPRSearchProperties : NSObject
@property (nonatomic, readwrite) double value;
@property (nonatomic, readwrite, copy) NSString *currency;
@property (nonatomic, readwrite, copy) NSString *contentCategory;
@property (nonatomic, readwrite, copy) NSString *contentID;
@property (nonatomic, readwrite, copy) NSString *searchString;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end

@interface RPRAddToCartProperties : NSObject
@property (nonatomic, readwrite) double value;
@property (nonatomic, readwrite, copy) NSString *currency;
@property (nonatomic, readwrite, copy) NSString *contentName;
@property (nonatomic, readwrite, copy) NSString *contentCategory;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end

@interface RPRAddToWishlistProperties : NSObject
@property (nonatomic, readwrite) double value;
@property (nonatomic, readwrite, copy) NSString *currency;
@property (nonatomic, readwrite, copy) NSString *contentName;
@property (nonatomic, readwrite, copy) NSString *contentCategory;
@property (nonatomic, readwrite, copy) NSString *contentID;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end

@interface RPRInitiateCheckoutProperties : NSObject
@property (nonatomic, readwrite) double value;
@property (nonatomic, readwrite, copy) NSString *currency;
@property (nonatomic, readwrite, copy) NSString *contentName;
@property (nonatomic, readwrite, copy) NSString *contentCategory;
@property (nonatomic, readwrite, copy) NSString *contentID;
@property (nonatomic, readwrite) NSInteger numItems;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end

@interface RPRAddPaymentInfoProperties : NSObject
@property (nonatomic, readwrite) double value;
@property (nonatomic, readwrite, copy) NSString *currency;
@property (nonatomic, readwrite, copy) NSString *contentCategory;
@property (nonatomic, readwrite, copy) NSString *contentID;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end

@interface RPRPurchaseProperties : NSObject
@property (nonatomic, readwrite, copy) NSString *contentName;
@property (nonatomic, readwrite, copy) NSString *contentCategory;
@property (nonatomic, readwrite) NSInteger numItems;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end

@interface RPRShareProperties : NSObject
@property (nonatomic, readwrite, copy) NSString *contentCategory;
@property (nonatomic, readwrite, copy) NSString *contentID;
@property (nonatomic, readwrite, copy) NSString *contentName;
@property (nonatomic, readwrite, copy) NSString *serviceName;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end

@interface RPRLeadProperties : NSObject
@property (nonatomic, readwrite) double value;
@property (nonatomic, readwrite, copy) NSString *currency;
@property (nonatomic, readwrite, copy) NSString *contentName;
@property (nonatomic, readwrite, copy) NSString *contentCategory;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end

@interface RPRCompleteRegistrationProperties : NSObject
@property (nonatomic, readwrite) double value;
@property (nonatomic, readwrite, copy) NSString *currency;
@property (nonatomic, readwrite, copy) NSString *contentName;
@property (nonatomic, readwrite, copy) NSString *status;
@property (nonatomic, readwrite, copy) NSDictionary *extras;
@end
