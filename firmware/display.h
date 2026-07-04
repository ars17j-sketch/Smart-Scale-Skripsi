#ifndef DISPLAY_H
#define DISPLAY_H

#include "globals.h"

class DisplayManager {
public:
    void begin();
    void showSplash();
    void showMeasurement(float weight, float height, float bmi, const String &status);
    void showMessage(const String &line1, const String &line2);
    void clear();
};

extern DisplayManager Display;

#endif