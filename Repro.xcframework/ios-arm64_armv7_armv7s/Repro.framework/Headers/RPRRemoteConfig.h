//
//  Repro iOS SDK
//
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


/// Wrapper class around remote config values.
@interface RPRRemoteConfigValue : NSObject
// Will be `nil` if both remote config and local config did not contain a value.
@property(nonatomic, readonly, nullable) NSString *stringValue;
@end

/// Status reported via fetch callback.
typedef NS_ENUM(NSInteger, RPRRemoteConfigFetchStatus) {
    RPRRemoteConfigFetchStatusSuccess            NS_SWIFT_NAME(success) = 0,
    RPRRemoteConfigFetchStatusTimeoutReached     NS_SWIFT_NAME(timeoutReached),
    RPRRemoteConfigFetchStatusAlreadyFetched     NS_SWIFT_NAME(alreadyFetched)
} NS_SWIFT_NAME(RPRRemoteConfigFetchStatus);




/// Remote config fetch result will be passed with this completion handler.
typedef void (^RPRRemoteConfigFetchCompletion)(RPRRemoteConfigFetchStatus status)
NS_SWIFT_NAME(RPRRemoteConfigFetchCompletion);





@interface RPRRemoteConfig : NSObject

/// Access remote config via `Repro.remoteConfig` instead of initializing this class.
- (nonnull instancetype)init NS_UNAVAILABLE;

#pragma mark - Remote Config Setup

/// You may not need this method because the default behavior is:
///    - After a call to `Repro.setup()`, automatically fetch every time the app will enter foreground
///    - Run `activateFetched` as soon as a response was received.
///
/// If you need a completionHandler to ensure the remoteConfig gets activated at a certain point in time
/// or want to validate remote config functionality while development, you should use this method. You can
/// only set one completionHandler at a time. Also only one fetch per app foreground/background cycle is
/// permitted. Therefore you should call this when your app comes to foreground, preferably
/// from `applicationWillEnterForeground`.
///
/// If the completionHandler handler is called with status `RPRRemoteConfigFetchStatusSuccess`, you should
/// proceed with calling `activateFetched` in the completionHandler or after the completionHandler has
/// been executed.
///
/// After `activateFetched` has been called, new remote config values are available. This completionHandler
/// is always guaranteed to be called on the main thread. The callback will be invalidated and not executed
/// if the app goes to background or the end-user OptsOut via the OptIn/OptOut API.
- (void)fetchWithTimeout:(NSTimeInterval)timeout
       completionHandler:(nonnull RPRRemoteConfigFetchCompletion)completionHandler
NS_SWIFT_NAME(fetch(withTimeout:completionHandler:));


/// This is only needed if you use `fetchWithTimeout:completionHandler:`. See above.
/// Returns YES if a previously fetched remote config has replaced the current remote config.
- (BOOL)activateFetched
NS_SWIFT_NAME(activateFetched());






#pragma mark - Local Default Settings

/// Set local defaults for remote config queries via dictionary.
- (BOOL)setDefaultsFromDictionary:(nonnull NSDictionary<NSString *, id> *)defaults
NS_SWIFT_NAME(setDefaults(fromDictionary:));

/// Set local defaults for remote config queries via a json file.
- (BOOL)setDefaultsFromJsonFile:(nonnull NSURL *)fileNameURL
NS_SWIFT_NAME(setDefaults(fromJsonFile:));

/// Set local defaults for remote config queries via a json string.
- (BOOL)setDefaultsFromJsonString:(nonnull NSString *)string
NS_SWIFT_NAME(setDefaults(fromJsonString:));






#pragma mark - Query Remote Config

/// Access to remote config values.
- (nonnull RPRRemoteConfigValue *)valueForKey:(nonnull NSString *)key
NS_SWIFT_NAME(value(forKey:));

/// Access to remote config values via subscript syntax.
- (nonnull RPRRemoteConfigValue *)objectForKeyedSubscript:(nonnull NSString *)key;

/// Return a dictonary with all key value pairs.
- (nonnull NSDictionary<NSString *, RPRRemoteConfigValue *> *)allValues
NS_SWIFT_NAME(allValues());

/// Return a dictonary with all key value pairs for a given prefix. Pass `nil` or an empty string to get all values.
- (nonnull NSDictionary<NSString *, RPRRemoteConfigValue *> *)allValuesWithPrefix:(nullable NSString *)prefix
NS_SWIFT_NAME(allValues(withPrefix:));

/// Returns the local default value for a key.
- (nonnull RPRRemoteConfigValue *)localDefaultValueForKey:(nonnull NSString *)key
NS_SWIFT_NAME(localDefaultValue(forKey:));

/// Reset all data. Local config & remote Config. Should only be used while in development.
- (void)forceReset
NS_SWIFT_NAME(forceReset());


@end

