//
//  ReproCpp.h
//
//  Created by jollyjoester_pro on 10/31/14.
//  Copyright (c) 2014 Repro Inc. All rights reserved.
//

#ifndef __REPRO_CPP_H__
#define __REPRO_CPP_H__

#include <string>
#include <map>

using std::string;
using std::map;

class ReproCpp {

public:

    // Setup
    static void setup(const char* token);

    // Log Level
    static void setLogLevel(const char* logLevel);

    // Screen Recording
    static void startRecording();
    static void stopRecording();
    static void pauseRecording();
    static void resumeRecording();

    // UIView Masking
    static void maskWithRect(float x, float y, float width, float height, const char* key);
    static void unmaskWithRect(const char* key);

    // User Profile
    static void setUserID(const char* userId);
    static void setUserProfile(const char* key, const char* value);
    static void setUserProfile(const std::map<std::string, std::string> &profile);

    // Event Tracking
    static void track(const char*eventName);
    static void trackWithProperties(const char* eventName, const char* jsonDictionary);

    // Crash Reporting
    static void enableCrashReporting();

    // In App Message
    static void disableInAppMessageOnActive();
    static void showInAppMessage();
};

#endif
