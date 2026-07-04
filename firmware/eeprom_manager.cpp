#include "eeprom_manager.h"

#define EEPROM_MAGIC 0x53534B50UL
#define EEPROM_ADDR 0

EEPROMManager EEPROMStore;

bool EEPROMManager::begin() {
    return EEPROM.begin(EEPROM_SIZE);
}

bool EEPROMManager::load(CalibrationData &data) {
    EEPROM.get(EEPROM_ADDR, data);
    return data.magic == EEPROM_MAGIC;
}

bool EEPROMManager::save(const CalibrationData &data) {
    CalibrationData tmp = data;
    tmp.magic = EEPROM_MAGIC;
    EEPROM.put(EEPROM_ADDR, tmp);
    return EEPROM.commit();
}

void EEPROMManager::reset() {
    CalibrationData data = {0.0f, 0.0f, EEPROM_MAGIC};
    EEPROM.put(EEPROM_ADDR, data);
    EEPROM.commit();
}
