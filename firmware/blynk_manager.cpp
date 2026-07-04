#include "blynk_manager.h"

BlynkManager BlynkApp;

void BlynkManager::begin(const char* auth, const char* ssid, const char* pass) {
    Blynk.begin(auth, ssid, pass);
}

void BlynkManager::run() {
    if (Blynk.connected()) {
        Blynk.run();
    }
}

void BlynkManager::sendMeasurement(float weight, float height, float bmi, const String &status) {
    if (!Blynk.connected()) return;
    Blynk.virtualWrite(V0, weight);
    Blynk.virtualWrite(V1, height);
    Blynk.virtualWrite(V2, bmi);
    Blynk.virtualWrite(V3, status);
}

bool BlynkManager::connected() const {
    return Blynk.connected();
}
