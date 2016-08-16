//
//  ReproCpp.mm
//
//  Created by jollyjoester_pro on 10/31/14.
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#include "ReproCpp.h"
#import <Repro/Repro.h>

static NSString* convertCStringToNSString(const char* string) {
    if (string) {
        return [NSString stringWithUTF8String:string];
    } else {
        return @"";
    }
}

static const char* convertNSStringToCString(NSString* string) {
    if (string) {
        const char* src = [string UTF8String];
        char* dst = (char*)malloc(strlen(src) + 1);
        strcpy(dst, src);
        return dst;
    } else {
        return "";
    }
}

static NSDictionary* convertCStringJSONToNSDictionary(const char* string) {
    if (string) {
        NSString* json = convertCStringToNSString(string);
        NSData* data = [json dataUsingEncoding:NSUTF8StringEncoding];
        return [NSJSONSerialization JSONObjectWithData:data options:kNilOptions error:nil];
    } else {
        return nil;
    }
}

void ReproCpp::setup(const char* token) {
    [Repro setup:convertCStringToNSString(token)];
}

void ReproCpp::setLogLevel(const char* logLevel) {
    if ([convertCStringToNSString(logLevel) isEqualToString:@"Debug"]) {
        [Repro setLogLevel:RPRLogLevelDebug];
    } else if ([convertCStringToNSString(logLevel) isEqualToString:@"Info"]) {
        [Repro setLogLevel:RPRLogLevelInfo];
    } else if ([convertCStringToNSString(logLevel) isEqualToString:@"Warn"]) {
        [Repro setLogLevel:RPRLogLevelWarn];
    } else if ([convertCStringToNSString(logLevel) isEqualToString:@"Error"]) {
        [Repro setLogLevel:RPRLogLevelError];
    } else if ([convertCStringToNSString(logLevel) isEqualToString:@"None"]) {
        [Repro setLogLevel:RPRLogLevelNone];
    }
}

void ReproCpp::startRecording() {
    [Repro startRecording];
}

void ReproCpp::stopRecording() {
    [Repro stopRecording];
}

void ReproCpp::pauseRecording() {
    [Repro pauseRecording];
}

void ReproCpp::resumeRecording() {
    [Repro resumeRecording];
}

void ReproCpp::maskWithRect(float x, float y, float width, float height, const char* key) {
    [Repro maskWithRect:CGRectMake(x,y,width,height) key:convertCStringToNSString(key)];
}

void ReproCpp::unmaskWithRect(const char* key) {
    [Repro unmaskForKey:convertCStringToNSString(key)];
}

void ReproCpp::setUserID(const char* userId) {
    [Repro setUserID:convertCStringToNSString(userId)];
}

const char* ReproCpp::getUserID() {
  return convertNSStringToCString([Repro getUserID]);
}

const char* ReproCpp::getDeviceID() {
  return convertNSStringToCString([Repro getDeviceID]);
}

void ReproCpp::setStringUserProfile(const char* key, const char* value) {
  [Repro setStringUserProfile:convertCStringToNSString(value) forKey:convertCStringToNSString(key)];
}

void ReproCpp::setIntUserProfile(const char* key, int value) {
  [Repro setIntUserProfile:value forKey:convertCStringToNSString(key)];
}

void ReproCpp::setDoubleUserProfile(const char* key, double value) {
  [Repro setDoubleUserProfile:value forKey:convertCStringToNSString(key)];
}

void ReproCpp::setDateUserProfile(const char* key, std::time_t value) {
  [Repro setDateUserProfile:[NSDate dateWithTimeIntervalSince1970:value] forKey:convertCStringToNSString(key)];
}

void ReproCpp::track(const char* eventName) {
    [Repro track:convertCStringToNSString(eventName) properties:nil];
}

void ReproCpp::trackWithProperties(const char* eventName, const char* jsonDictionary) {
    [Repro track:convertCStringToNSString(eventName) properties:convertCStringJSONToNSDictionary(jsonDictionary)];
}

// In App Message
void ReproCpp::disableInAppMessageOnActive() {
    [Repro disableInAppMessageOnActive];
}

void ReproCpp::showInAppMessage() {
    [Repro showInAppMessage];
}
