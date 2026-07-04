#ifndef BLYNK_MANAGER_H
#define BLYNK_MANAGER_H

#include "globals.h"
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

class BlynkManager {
public:
    void begin(const char* auth, const char* ssid, const char* pass);
    void run();
    void sendMeasurement(float weight, float height, float bmi, const String &status);
    bool connected() const;
};

extern BlynkManager BlynkApp;

#endif