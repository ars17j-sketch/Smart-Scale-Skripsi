#ifndef EEPROM_MANAGER_H
#define EEPROM_MANAGER_H

#include "globals.h"

struct CalibrationData {
    float scaleFactor;
    float heightOffset;
    uint32_t magic;
};

class EEPROMManager {
public:
    bool begin();
    bool load(CalibrationData &data);
    bool save(const CalibrationData &data);
    void reset();
};

extern EEPROMManager EEPROMStore;

#endif