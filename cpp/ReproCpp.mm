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

void ReproCpp::track(const char* eventName) {
    [Repro track:convertCStringToNSString(eventName) properties:nil];
}

void ReproCpp::trackWithProperties(const char* eventName, const char* jsonDictionary) {
    [Repro track:convertCStringToNSString(eventName) properties:convertCStringJSONToNSDictionary(jsonDictionary)];
}

void ReproCpp::enableCrashReporting() {
    [Repro enableCrashReporting];
}

// Survey
void ReproCpp::survey() {
    NSError *error = nil;
    [Repro survey:&error];
}

// Usablity Testing
void ReproCpp::enableUsabilityTesting() {
    [Repro enableUsabilityTesting];
}

// In App Message
void ReproCpp::disableInAppMessageOnActive() {
    [Repro disableInAppMessageOnActive];
}

void ReproCpp::showInAppMessage() {
    [Repro showInAppMessage];
}
