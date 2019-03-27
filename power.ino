https://docs.espressif.com/projects/esp-idf/en/latest/api-reference/system/sleep_modes.html

#include <M5Stack.h>

+ One pressing will only reset the ESP32, double pressing will be treated as power off, so the PMU will directly cut-off the MCU's power.
+ In deep sleep and light sleep modes, wireless peripherals are powered down.
 
M5.setWakeupButton(BUTTON_A_PIN); //press 1.button and m5stack wakes up
M5.powerOFF();  // puts the whole machine to sleep
esp_deep_sleep_start(); //putting the esp32 to sleep 
esp_light_sleep_start()
