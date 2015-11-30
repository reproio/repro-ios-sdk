//
//  RPRUser.h
//  Repro
//
//  Copyright © 2015 Repro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Repro Public API: RPRUser
 */
@interface RPRUser : NSObject

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSDictionary *profile;

/**
 * @method
 *
 * @abstract
 * Setting a profile in Repro User.
 *
 * @discussion
 * key and value must be <code>NSString</code> objects
 *
 * @param value          profile value string
 * @param key            profile key string
 */
- (void)setProfile:(NSString *)value forKey:(NSString *)key;

/**
 * @method
 *
 * @abstract
 * Convenience method for setting profile information in Repro User.
 *
 * @discussion
 * Keys and values must be <code>NSString</code> objects
 *
 * @param profile        profile dictionary
 */
- (void)setProfile:(NSDictionary *)profile;

@end
