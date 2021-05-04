
#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// force the compiler to show a warning to confirm that this file is inlcuded
#warning **** Using Settings from this File ***

#define CUSTOM_CONFIG
#define CUSTOM_CONFIG_REMOVALS

//#define CUSTOM_CONFIG_ZIGBEE
//#define CUSTOM_CONFIG_BATTERY
//#define CUSTOM_CONFIG_SCRIPTING

// Settings applied globally to any binary

#ifdef CUSTOM_CONFIG  // ****************************************************************************


#endif  // CUSTOM_CONFIG ****************************************************************************


// THIS SECTION IS USED TO REMOVE EVERYTHING LISTED FROM DEFAULT BINARY
/*
ooooo     ooo ooooo      ooo oooooooooo.   oooooooooooo oooooooooooo ooooo ooooo      ooo oooooooooooo                   .o.       ooooo        ooooo        
`888'     `8' `888b.     `8' `888'   `Y8b  `888'     `8 `888'     `8 `888' `888b.     `8' `888'     `8                  .888.      `888'        `888'        
 888       8   8 `88b.    8   888      888  888          888          888   8 `88b.    8   888                         .8"888.      888          888         
 888       8   8   `88b.  8   888      888  888oooo8     888oooo8     888   8   `88b.  8   888oooo8                   .8' `888.     888          888         
 888       8   8     `88b.8   888      888  888    "     888    "     888   8     `88b.8   888    "                  .88ooo8888.    888          888         
 `88.    .8'   8       `888   888     d88'  888       o  888          888   8       `888   888       o              .8'     `888.   888       o  888       o 
   `YbodP'    o8o        `8  o888bood8P'   o888ooooood8 o888o        o888o o8o        `8  o888ooooood8 ooooooooooo o88o     o8888o o888ooooood8 o888ooooood8 
*/
#ifdef CUSTOM_CONFIG_REMOVALS  // ******************************************************************
#warning **** Removed some defines to save code space ****

#undef USE_ARDUINO_OTA                          // Disable support for Arduino OTA (+13k code)
#undef USE_DOMOTICZ                             // Disable Domoticz (+6k code, +0.3k mem)
#undef USE_HOME_ASSISTANT                       // Disable Home Assistant Discovery Support (+7k code)

#undef USE_MQTT_TLS                             // Use TLS for MQTT connection (+34.5k code, +7.0k mem and +4.8k additional during connection handshake)
  #undef USE_MQTT_TLS_CA_CERT                   // Force full CA validation instead of fingerprints, slower, but simpler to use (+2.2k code, +1.9k mem during connection handshake)
  #undef USE_MQTT_TLS_FORCE_EC_CIPHER           // Force Elliptic Curve cipher (higher security) required by some servers (automatically enabled with USE_MQTT_AWS_IOT) (+11.4k code, +0.4k mem)
  #undef USE_MQTT_AWS_IOT                       // Enable MQTT for AWS IoT - requires a private key (+11.9k code, +0.4k mem)

#undef USE_KNX                                  // Disable KNX IP Protocol Support (+9.4k code, +3k7 mem)
#undef USE_WEBSERVER
#undef USE_JAVASCRIPT_ES6                       // Disable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)
#undef USE_WEBSEND_RESPONSE                     // DIsable command WebSend response message (+1k code)
#undef USE_EMULATION_HUE                        // Disable Hue Bridge emulation for Alexa (+18k code, +2k mem)
#undef USE_EMULATION_WEMO                       // Disable Belkin WeMo emulation for Alexa (+18k code, +2k mem)
#undef USE_DISCOVERY                            // Disable mDNS for the following services (+8k code, +0.3k mem)
#undef USE_TIMERS                               // Disable support for up to 16 timers (+2k2 code)
#undef USE_TIMERS_WEB                           // Disable timer webpage support (+4k5 code)
#undef USE_SUNRISE                              // Disable support for Sunrise and sunset tools (+16k)

#undef USE_RULES                                // Disable support for rules (+4k4 code)
  #undef USE_EXPRESSION                         // Disable support for expression evaluation in rules (+3k2 code, +64 bytes mem)
    #undef SUPPORT_IF_STATEMENT                 // Disable support for IF statement in rules (+4k2 code, -332 bytes mem)
  #undef SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

#undef USE_SCRIPT                               // Disable support for script
  #undef USE_SCRIPT_FATFS                       // Disable support for script storage on SD card (+12k code, +4k mem)

#undef ROTARY_V1                                // Disable support for MI Desk Lamp
#undef USE_SONOFF_RF                            // Add support for Sonoff Rf Bridge
  #undef USE_RF_FLASH                           // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+3k code)
#undef USE_SONOFF_SC                            // Disable support for Sonoff Sc (+1k1 code)
#undef USE_TUYA_MCU                             // Disable support for Tuya Serial Dimmer
#undef USE_ARMTRONIX_DIMMERS                    // Disable support for Armtronix Dimmers (+1k4 code)
#undef USE_PS_16_DZ                             // Disable support for PS-16-DZ Dimmer (+2k code)
#undef USE_SONOFF_IFAN                          // Disable support for Sonoff iFan02 and iFan03 (+2k code)
#undef USE_BUZZER                               // Disable support for a buzzer (+0k6 code)
#undef USE_ARILUX_RF                            // Disable support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))
#undef USE_SHUTTER                              // Disable Shutter support for up to 4 shutter with different motortypes (+6k code)
#undef USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
#undef USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+2k6 code)
#undef USE_HOTPLUG                              // Add support for HotPlug
#undef USE_DEVICE_GROUPS                        // Add support for device groups (+4k code)
#undef USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+4k5 code)
  #undef USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer, also adds device groups support (+0k7 code, also includes device groups)
#undef USE_KEELOQ                               // Add support for controling Jarolift rollers by Keeloq algorithm
#undef USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer

// -- Optional light modules ---------------------
#undef USE_WS2812                               // Disable WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
  #undef USE_WS2812_DMA                         // Disable DMA supports only GPIO03 (= Serial RXD) (+1k mem). When USE_WS2812_DMA is enabled expect Exceptions on Pow
  #undef USE_WS2812_HARDWARE                    // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106)
  #undef USE_WS2812_CTYPE                       // WS2812 Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
#undef USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1 and Ailight
#undef USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
#undef USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#undef USE_SONOFF_L1                            // Add support for Sonoff L1 led control
#undef USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller

#undef USE_COUNTER                              // Disable counters
#undef USE_ADC_VCC

#undef USE_DS18x20                              // Disable support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
  #undef W1_PARASITE_POWER                      // If using USE_DS18x20 then optimize for parasite powered sensors

#undef USE_I2C                                  // Disable I2C using library wire (+10k code, 0k2 mem, 124 iram)
#undef USE_SHT                                  // Disable SHT1X sensor (+1k4 code)
#undef USE_HTU                                  // Disable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
#undef USE_BMP                                  // Disable BMP085/BMP180/BMP280/BME280 sensor (I2C address 0x76 or 0x77) (+4k code)
  #undef USE_BME680                             // Disable support for BME680 sensor using Bosch BME680 library (+4k code)
#undef USE_BH1750                               // Disable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
#undef USE_VEML6070                             // Disable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+0k5 code)
#undef USE_ADS1115                              // Disable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
#undef USE_INA219                               // Disable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
#undef USE_INA226                               // Disable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
#undef USE_SHT3X                                // Disable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
#undef USE_TSL2561                              // Disable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
#undef USE_TSL2591                              // Disable TSL2591 sensor (I2C address 0x29, 0x39 or 0x49) using library Adafruit_TSL2591 (+2k3 code)
#undef USE_MGS                                  // Disable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
#undef USE_SGP30                                // Disable SGP30 sensor (I2C address 0x58) (+1k1 code)
#undef USE_SI1145                               // Disable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
#undef USE_LM75AD                               // Disable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
#undef USE_APDS9960                             // Disable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
#undef USE_MCP230xx                             // Disable MCP23008/MCP23017 for GP INPUT ONLY (I2C addresses 0x20 - 0x27) providing command Sensor29 for configuration (+2k2 code)
#undef USE_PCA9685                              // Disable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
#undef USE_MPR121                               // Disable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
#undef USE_CCS811                               // Disable CCS811 sensor (I2C address 0x5A) (+2k2 code)
#undef USE_MPU6050                              // Disable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+2k6 code)
#undef USE_DS3231                               // Disable DS3231 external RTC in case no Wifi is avaliable. See docs in the source file (+1k2 code)
//  #undef USE_RTC_ADDR  0x68                     // Default I2C address 0x68
#undef USE_MGC3130                              // Disable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
#undef USE_MAX44009                             // Disable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
#undef USE_SCD30                                // Disable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
#undef USE_SPS30                                // Disable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
#undef USE_ADE7953                              // Disable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
#undef USE_VL53L0X                              // Disable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
#undef USE_MLX90614                             // Disable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
#undef USE_CHIRP                                // Disable CHIRP soil moisture sensor (variable I2C address, default 0x20)
#undef USE_PAJ7620                              // Disable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
#undef USE_PCF8574                              // Disable PCF8574 I/O Expander (I2C addresses 0x20 - 0x27 and 0x38 - 0x3F) (+1k9 code)
#undef USE_HIH6                                 // Disable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
#undef USE_DHT12                                // Disable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
#undef USE_DS1624                               // Disable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F)
#undef USE_AHT1x                                // Disable AHT10/15 humidity and temperature sensor (I2C address 0x38) (+0k8 code)
#undef USE_WEMOS_MOTOR_V1                       // Disable Wemos motor driver V1 ()
#undef USE_HDC1080                              // Disable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)
#undef USE_DISPLAY                            // Add I2C Display Support (+2k code)
  #undef USE_DISPLAY_MODES1TO5                // Enable display mode 1 to 5 in addition to mode 0
  #undef USE_DISPLAY_LCD                      // [DisplayModel 1] [I2cDriver3] Enable Lcd display (I2C addresses 0x27 and 0x3F) (+6k code)
  #undef USE_DISPLAY_SSD1306                  // [DisplayModel 2] [I2cDriver4] Enable SSD1306 Oled 128x64 display (I2C addresses 0x3C and 0x3D) (+16k code)
  #undef USE_DISPLAY_MATRIX                   // [DisplayModel 3] [I2cDriver5] Enable 8x8 Matrix display (I2C adresseses see below) (+11k code)
    #undef MTX_ADDRESS1                       // [DisplayAddress1] I2C address of first 8x8 matrix module
    #undef MTX_ADDRESS2                       // [DisplayAddress2] I2C address of second 8x8 matrix module
    #undef MTX_ADDRESS3                       // [DisplayAddress3] I2C address of third 8x8 matrix module
    #undef MTX_ADDRESS4                       // [DisplayAddress4] I2C address of fourth 8x8 matrix module
    #undef MTX_ADDRESS5                       // [DisplayAddress5] I2C address of fifth 8x8 matrix module
    #undef MTX_ADDRESS6                       // [DisplayAddress6] I2C address of sixth 8x8 matrix module
    #undef MTX_ADDRESS7                       // [DisplayAddress7] I2C address of seventh 8x8 matrix module
    #undef MTX_ADDRESS8                       // [DisplayAddress8] I2C address of eigth 8x8 matrix module
  #undef USE_DISPLAY_SEVENSEG                 // [DisplayModel 11] [I2cDriver47] Enable sevenseg display (I2C 0x70-0x77) (<+11k code)
    #undef SEVENSEG_ADDRESS1                 // [DisplayAddress1] I2C address of first sevenseg matrix module
 #undef USE_DISPLAY_SH1106                   // [DisplayModel 7] [I2cDriver6] Enable SH1106 Oled 128x64 display (I2C addresses 0x3C and 0x3D)


#undef USE_MHZ19                                // Disable support for MH-Z19 CO2 sensor (+2k code)
#undef USE_SENSEAIR                             // Disable support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
#undef USE_PMS5003                              // Disable support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
#undef USE_NOVA_SDS                             // Disable support for SDS011 and SDS021 particle concentration sensor (+0k7 code)
#undef USE_HPMA                                 // Disable support for Honeywell HPMA115S0 particle concentration sensor (+1k4)
#undef USE_SERIAL_BRIDGE                        // Disable support for software Serial Bridge (+0k8 code)
#undef USE_MP3_PLAYER                           // Disable Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
#undef USE_AZ7798                               // Disable support for AZ-Instrument 7798 CO2 datalogger (+1k6 code)
#undef USE_PN532_HSU                            // Disable support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
  #undef USE_PN532_CAUSE_EVENTS                 // Cause event execution for PN532_UID= and PN532_DATA=[if defined] (+ 30 bytes code)
  #undef USE_PN532_DATA_FUNCTION                // Disable sensor40 command support for erase, setting data block content (+1k7 code, 388 bytes mem)
  #undef USE_PN532_DATA_RAW                     // Allow DATA block to be used by non-alpha-numberic data (+ 80 bytes code, 48 bytes ram)
#undef USE_RDM6300                              // Disable support for RDM6300 125kHz RFID Reader (+0k8)
#undef USE_IBEACON                              // Disable support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
#undef USE_GPS                                  // Disable support for GPS and NTP Server for becoming Stratus 1 Time Source (+ 3.1kb flash, +132 bytes RAM)
  #undef USE_FLOG                               // Disable support for GPS logging in OTA's Flash (Experimental) (+ 2.9kb flash, +8 bytes RAM)
#undef USE_HM10                                 // Disable support for HM-10 as a BLE-bridge for the LYWSD03 (+5k1 code)
#undef USE_HRXL                                 // Disable support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)

// Power monitoring sensors ----------------------
#undef USE_ENERGY_MARGIN_DETECTION              // Disable support for Energy Margin detection (+1k6 code)
  #undef USE_ENERGY_POWER_LIMIT                 // Disable additional support for Energy Power Limit detection (+1k2 code)
#undef USE_PZEM004T                             // Disable support for PZEM004T Energy monitor (+2k code)
#undef USE_PZEM_AC                              // Disable support for PZEM014,016 Energy monitor (+1k1 code)
#undef USE_PZEM_DC                              // Disable support for PZEM003,017 Energy monitor (+1k1 code)
#undef USE_MCP39F501                            // Disable support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
#undef USE_SDM120                               // Disable support for Eastron SDM120-Modbus energy monitor (+1k1 code)
#undef USE_SDM630                               // Disable support for Eastron SDM630-Modbus energy monitor (+0k6 code)
#undef USE_DDS2382                              // Disable support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
#undef USE_DDSU666                              // Disable support for Chint DDSU666 Modbus energy monitor (+0k6 code)
#undef USE_SOLAX_X1                             // Disable support for Solax X1 series Modbus log info (+4k1 code)
#undef USE_LE01MR                               // DIsable support for F&F LE-01MR modbus energy meter

// -- Low level interface devices -----------------
#undef USE_DHT                                  // Disable support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor

#undef USE_MAX31855                             // Disable MAX31855 K-Type thermocouple sensor using softSPI
#undef USE_MAX31865                             // Disable support for MAX31865 RTD sensors using softSPI

// -- IR Remote features --------------------------
#undef USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #undef USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #undef USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #undef USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

  #undef USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)

// -- Zigbee interface ----------------------------
#undef USE_ZIGBEE                               // Disable serial communication with Zigbee CC2530 flashed with ZNP

// ------------------------------------------------

#undef USE_SR04                                 // Disable support for HC-SR04 ultrasonic devices (+1k code)

#undef USE_TM1638                               // Disable support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
#undef USE_HX711                                // Disable support for HX711 load cell (+1k5 code)
  #undef USE_HX711_GUI                          // Disable optional web GUI to HX711 as scale (+1k8 code)

#undef USE_TX20_WIND_SENSOR                     // Disable support for La Crosse TX20 anemometer (+2k6/0k8 code)
#undef USE_TX23_WIND_SENSOR                     // Disable support for La Crosse TX23 anemometer (+2k7/1k code)

#undef USE_RC_SWITCH                            // Disable support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)

#undef USE_RF_SENSOR                            // Disable support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)
  #undef USE_THEO_V2                            // Disable support for decoding Theo V2 sensors as documented on https://sidweb.nl using 434MHz RF sensor receiver (+1k4 code)
  #undef USE_ALECTO_V2                          // Disable support for decoding Alecto V2 sensors like ACH2010, WS3000 and DKW2012 weather stations using 868MHz RF sensor receiver (+1k7 code)

#undef USE_HRE                                  // Disable support for Badger HR-E Water Meter (+1k4 code)
#undef USE_A4988_STEPPER                        // Disable support for A4988 stepper-motor-driver-circuit (+10k5 code)

#undef USE_TASMOTA_CLIENT                       // Disable support for Arduino Uno/Pro Mini via serial interface including flashing (+2k3 code, 44 mem)

//#undef DEBUG_TASMOTA_CORE                       // Disable core debug messages
//#undef DEBUG_TASMOTA_DRIVER                     // Disable driver debug messages
//#undef DEBUG_TASMOTA_SENSOR                     // DIsable sensor debug messages
//#undef DEBUG_TASMOTA_TRACE                      // Disable trace debug messages

#endif  // CUSTOM_CONFIG_REMOVALS *******************************************************************
/*
 oooooooooooo ooooo   .oooooo.    oooooooooo.  oooooooooooo oooooooooooo 
d'""""""d888' `888'  d8P'  `Y8b   `888'   `Y8b `888'     `8 `888'     `8 
      .888P    888  888            888     888  888          888         
     d888'     888  888            888oooo888'  888oooo8     888oooo8    
   .888P       888  888     ooooo  888    `88b  888    "     888    "    
  d888'    .P  888  `88.    .88'   888    .88P  888       o  888       o 
.8888888888P  o888o  `Y8bood8P'   o888bood8P'  o888ooooood8 o888ooooood8 */
                                                      
#ifdef CUSTOM_CONFIG_ZIGBEE  // *******************************************************************

#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "zigbee"

#undef OTA_URL
#define OTA_URL                " "  // [OtaUrl]

//#define USE_ARDUINO_OTA                          // Add optional support for Arduino OTA (+13k code)
#define USE_DOMOTICZ                             // Enable Domoticz (+6k code, +0.3k mem)
#define USE_HOME_ASSISTANT                       // Enable Home Assistant Discovery Support (+7k code)

//#define USE_MQTT_TLS                             // Use TLS for MQTT connection (+34.5k code, +7.0k mem and +4.8k additional during connection handshake)
//  #define USE_MQTT_TLS_CA_CERT                   // Force full CA validation instead of fingerprints, slower, but simpler to use (+2.2k code, +1.9k mem during connection handshake)
//  #define USE_MQTT_TLS_FORCE_EC_CIPHER           // Force Elliptic Curve cipher (higher security) required by some servers (automatically enabled with USE_MQTT_AWS_IOT) (+11.4k code, +0.4k mem)
//  #define USE_MQTT_AWS_IOT                       // Enable MQTT for AWS IoT - requires a private key (+11.9k code, +0.4k mem)

//#define USE_KNX                                  // Enable KNX IP Protocol Support (+9.4k code, +3k7 mem)
#define USE_WEBSERVER                            // Enable web server and Wifi Manager (+66k code, +8k mem)
  #define USE_JAVASCRIPT_ES6                     // Enable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)
#define USE_WEBSEND_RESPONSE                   // Enable command WebSend response message (+1k code)
//  #define USE_EMULATION_HUE                      // Enable Hue Bridge emulation for Alexa (+14k code, +2k mem)
//  #define USE_EMULATION_WEMO                     // Enable Belkin WeMo emulation for Alexa (+6k code, +2k mem)
//  #define USE_SENDMAIL

//#define USE_DISCOVERY                            // Enable mDNS for the following services (+8k code, +0.3k mem)
#define USE_TIMERS                               // Add support for up to 16 timers (+2k2 code)
  #define USE_TIMERS_WEB                         // Add timer webpage support (+4k5 code)
  #define USE_SUNRISE                            // Add support for Sunrise and sunset tools (+16k)

#define USE_RULES                                // Add support for rules (+4k4 code)
//  #define USE_EXPRESSION                         // Add support for expression evaluation in rules (+3k2 code, +64 bytes mem)
//    #define SUPPORT_IF_STATEMENT                 // Add support for IF statement in rules (+4k2 code, -332 bytes mem)
//  #define SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

//#define USE_SCRIPT                               // Add support for script
  #define USE_SCRIPT_FATFS 4                     // Add support for script storage on SD card (+12k code, +4k mem)

// -- Optional modules ----------------------------
//#define ROTARY_V1                                // Add support for MI Desk Lamp
//#define USE_SONOFF_RF                            // Add support for Sonoff Rf Bridge
//  #define USE_RF_FLASH                           // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+3k code)
//#define USE_SONOFF_SC                            // Add support for Sonoff Sc (+1k1 code)
//#define USE_TUYA_MCU                             // Add support for Tuya Serial Dimmer
//#define USE_ARMTRONIX_DIMMERS                    // Add support for Armtronix Dimmers (+1k4 code)
//#define USE_PS_16_DZ                             // Add support for PS-16-DZ Dimmer and Sonoff L1 (+2k code)
//#define USE_SONOFF_IFAN                          // Add support for Sonoff iFan02 and iFan03 (+2k code)
//#define USE_BUZZER                               // Add support for a buzzer (+0k6 code)
//#define USE_ARILUX_RF                            // Add support for Arilux RF remote controller (+1k code, 252 iram (non 2.3.0))
//#define USE_SHUTTER                              // Add Shutter support for up to 4 shutter with different motortypes (+6k code)
//#define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
//#define USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+2k6 code)
//#define USE_HOTPLUG                              // Add support for HotPlug
//#define USE_DEVICE_GROUPS                      // Add support for device groups (+4k code)
//#define USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+4k5 code)
//  #define USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer, also adds device groups support (+0k7 code, also includes device groups)
//#define USE_KEELOQ                               // Add support for Jarolift rollers by Keeloq algorithm (+4k5 code)
//#define USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer

// -- Optional light modules ----------------------
// #undef USE_LIGHT    // DISABLES LIGHTS ????
// #define USE_WS2812                               // WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
// //  #define USE_WS2812_DMA                         // DMA supports only GPIO03 (= Serial RXD) (+1k mem). When USE_WS2812_DMA is enabled expect Exceptions on Pow
//   #define USE_WS2812_HARDWARE  NEO_HW_WS2812     // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106)
// //  #define USE_WS2812_CTYPE     NEO_GRB          // WS2812 Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
//   #define USE_WS2812_CTYPE     NEO_GRBW          // WS2812 Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
// #define USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1, Ailight and Lohas
// #define USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
// #define USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
// #define USE_SONOFF_L1                            // Add support for Sonoff L1 led control
//#define USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller

//#define USE_COUNTER                              // Enable counters
//#define USE_ADC_VCC                              // Display Vcc in Power status. Disable for use as Analog input on selected devices

// #define USE_DS18x20                              // Add support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
//  #define W1_PARASITE_POWER                      // Optimize for parasite powered sensors

// -- I2C sensors ---------------------------------
// #define USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)
#ifdef USE_I2C
//  #define USE_SHT                                // Enable SHT1X sensor (+1k4 code)
//  #define USE_HTU                                // Enable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
//  #define USE_BMP                                // Enable BMP085/BMP180/BMP280/BME280 sensor (I2C address 0x76 or 0x77) (+4k code)
    #define USE_BME680                           // Enable support for BME680 sensor using Bosch BME680 library (+4k code)
//  #define USE_BH1750                             // Enable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
//  #define USE_VEML6070                           // Enable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+0k5 code)
//  #define USE_ADS1115                            // Enable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
//  #define USE_INA219                             // Enable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
//  #define USE_INA226                             // Enable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
//  #define USE_SHT3X                              // Enable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
//  #define USE_TSL2561                            // Enable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
//  #define USE_TSL2591                            // Enable TSL2591 sensor (I2C address 0x29, 0x39 or 0x49) using library Adafruit_TSL2591 (+2k3 code)
//  #define USE_MGS                                // Enable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
    #define MGS_SENSOR_ADDR    0x04              // Default Mutichannel Gas sensor i2c address
//  #define USE_SGP30                              // Enable SGP30 sensor (I2C address 0x58) (+1k1 code)
//  #define USE_SI1145                             // Enable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
//  #define USE_LM75AD                             // Enable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
//  #define USE_APDS9960                           // Enable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
//  #define USE_MCP230xx                           // Enable MCP23008/MCP23017 for GP INPUT ONLY (I2C addresses 0x20 - 0x27) providing command Sensor29 for configuration (+2k2 code)
//    #define USE_MCP230xx_ADDR 0x20               // Enable MCP23008/MCP23017 I2C Address to use (Must be within range 0x20 through 0x27 - set according to your wired setup)
//    #define USE_MCP230xx_OUTPUT                  // Enable MCP23008/MCP23017 OUTPUT support through sensor29 commands (+1k code)
//    #define USE_MCP230xx_DISPLAYOUTPUT           // Enable MCP23008/MCP23017 to display state of OUTPUT pins on Web UI (+0k2 code)
//  #define USE_PCA9685                            // Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
//    #define USE_PCA9685_ADDR 0x40                // Enable PCA9685 I2C Address to use (Must be within range 0x40 through 0x47 - set according to your wired setup)
//    #define USE_PCA9685_FREQ 50                  // Define default PWM frequency in Hz to be used (must be within 24 to 1526) - If other value is used, it will rever to 50Hz
//  #define USE_MPR121                             // Enable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
//  #define USE_CCS811                             // Enable CCS811 sensor (I2C address 0x5A) (+2k2 code)
//  #define USE_MPU6050                            // Enable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+2k6 code)
//  #define USE_DS3231                             // Enable DS3231 external RTC in case no Wifi is avaliable. See docs in the source file (+1k2 code)
//    #define USE_RTC_ADDR  0x68                   // Default I2C address 0x68
//  #define USE_MGC3130                            // Enable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
//  #define USE_MAX44009                           // Enable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
//  #define USE_SCD30                              // Enable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
//  #define USE_SPS30                              // Enable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
//  #define USE_ADE7953                            // Enable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
//  #define USE_VL53L0X                            // Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
//  #define USE_MLX90614                           // Enable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
//  #define USE_CHIRP                              // Enable CHIRP soil moisture sensor (variable I2C address, default 0x20)
//  #define USE_PAJ7620                            // Enable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
//  #define USE_PCF8574                            // Enable PCF8574 I/O Expander (I2C addresses 0x20 - 0x27 and 0x38 - 0x3F) (+1k9 code)
//  #define USE_HIH6                               // Enable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
//  #define USE_DHT12                              // [I2cDriver41] Enable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
//  #define USE_DS1624                             // [I2cDriver42] Enable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F)
//  #define USE_AHT1x                              // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38) (+0k8 code)
//  #define USE_WEMOS_MOTOR_V1                     // [I2cDriver44] Enable Wemos motor driver V1 ()
//  #define USE_HDC1080                            // [I2cDriver45] Enable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)

//   #define USE_DISPLAY                            // Add I2C Display Support (+2k code)
//     #define USE_DISPLAY_MODES1TO5                // Enable display mode 1 to 5 in addition to mode 0
//     #define USE_DISPLAY_LCD                      // [DisplayModel 1] Enable Lcd display (I2C addresses 0x27 and 0x3F) (+6k code)
//     #define USE_DISPLAY_SSD1306                  // [DisplayModel 2] Enable SSD1306 Oled 128x64 display (I2C addresses 0x3C and 0x3D) (+16k code)
//     #define USE_DISPLAY_MATRIX                   // [DisplayModel 3] Enable 8x8 Matrix display (I2C adresseses see below) (+11k code)
//       #define MTX_ADDRESS1     0x71              // [DisplayAddress1] I2C address of first 8x8 matrix module
//       #define MTX_ADDRESS2     0x74              // [DisplayAddress2] I2C address of second 8x8 matrix module
//       #define MTX_ADDRESS3     0x75              // [DisplayAddress3] I2C address of third 8x8 matrix module
//       #define MTX_ADDRESS4     0x72              // [DisplayAddress4] I2C address of fourth 8x8 matrix module
//       #define MTX_ADDRESS5     0x73              // [DisplayAddress5] I2C address of fifth 8x8 matrix module
//       #define MTX_ADDRESS6     0x76              // [DisplayAddress6] I2C address of sixth 8x8 matrix module
//       #define MTX_ADDRESS7     0x00              // [DisplayAddress7] I2C address of seventh 8x8 matrix module
//       #define MTX_ADDRESS8     0x00              // [DisplayAddress8] I2C address of eigth 8x8 matrix module
//     #define USE_DISPLAY_SH1106                   // [DisplayModel 7] Enable SH1106 Oled 128x64 display (I2C addresses 0x3C and 0x3D)
#endif  // USE_I2C

// // -- SPI sensors ---------------------------------
// #define USE_SPI                                  // Hardware SPI using GPIO12(MISO), GPIO13(MOSI) and GPIO14(CLK) in addition to two user selectable GPIOs(CS and DC)
// #ifdef USE_SPI
// //  #define USE_NRF24                              // Add SPI support for NRF24L01(+) (+2k6 code)
//   #ifdef USE_NRF24
//     #define USE_MIBLE                            // BLE-bridge for some Mijia-BLE-sensors (+4k7 code)
//   #else
//     #ifndef USE_DISPLAY
//       #define USE_DISPLAY                        // Add SPI Display support for 320x240 and 480x320 TFT
//     #endif
//       #define USE_DISPLAY_ILI9341                // [DisplayModel 4] Enable ILI9341 Tft 480x320 display (+19k code)
// //      #define USE_DISPLAY_EPAPER_29              // [DisplayModel 5] Enable e-paper 2.9 inch display (+19k code)
// //      #define USE_DISPLAY_EPAPER_42              // [DisplayModel 6] Enable e-paper 4.2 inch display
// //      #define USE_DISPLAY_ILI9488                // [DisplayModel 8] [I2cDriver38] (Touch)
// //      #define USE_DISPLAY_SSD1351                // [DisplayModel 9]
// //      #define USE_DISPLAY_RA8876                 // [DisplayModel 10] [I2cDriver39] (Touch)
//   #endif  // USE_NRF24
// #endif  // USE_SPI

// -- Serial sensors ------------------------------
//#define USE_MHZ19                                // Add support for MH-Z19 CO2 sensor (+2k code)
//#define USE_SENSEAIR                             // Add support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
//#define USE_PMS5003                              // Add support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
//#define USE_NOVA_SDS                             // Add support for SDS011 and SDS021 particle concentration sensor (+0k7 code)
//#define USE_HPMA                                 // Add support for Honeywell HPMA115S0 particle concentration sensor (+1k4)
//#define USE_SERIAL_BRIDGE                        // Add support for software Serial Bridge (+1k1 code)
//#define USE_MP3_PLAYER                           // Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
//#define USE_AZ7798                               // Add support for AZ-Instrument 7798 CO2 datalogger (+1k6 code)
//#define USE_PN532_HSU                            // Add support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
//  #define USE_PN532_CAUSE_EVENTS                 // Cause event execution for PN532_UID= and PN532_DATA=[if defined] (+ 30 bytes code)
  #define USE_PN532_DATA_FUNCTION                // Add sensor40 command support for erase, setting data block content (+1k7 code, 388 bytes mem)
  #define USE_PN532_DATA_RAW                     // Allow DATA block to be used by non-alpha-numberic data (+ 80 bytes code, 48 bytes ram)
//#define USE_RDM6300                              // Add support for RDM6300 125kHz RFID Reader (+0k8)
//#define USE_IBEACON                              // Add support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
//#define USE_HM10                                 // Add support for HM-10 as a BLE-bridge for the LYWSD03 (+5k1 code)
//#define USE_HRXL                                 // Add support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)

// Power monitoring sensors -----------------------
// #undef USE_ENERGY_SENSOR                         // Disable energy sensors (-14k code)
// #define USE_ENERGY_MARGIN_DETECTION              // Add support for Energy Margin detection (+1k6 code)
// //  #define USE_ENERGY_POWER_LIMIT                 // Add additional support for Energy Power Limit detection (+1k2 code)
// #define USE_PZEM004T                             // Add support for PZEM004T Energy monitor (+2k code)
// #define USE_PZEM_AC                              // Add support for PZEM014,016 Modbus Energy monitor (+1k1 code)
// //#define USE_PZEM_DC                              // Add support for PZEM003,017 Modbus Energy monitor (+1k1 code)
// #define USE_MCP39F501                            // Add support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
//#define USE_SDM120                             // Add support for Eastron SDM120-Modbus energy monitor (+1k1 code)
//#define USE_SDM630                             // Add support for Eastron SDM630-Modbus energy monitor (+0k6 code)
//#define USE_DDS2382                              // Add support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
//#define USE_DDSU666                              // Add support for Chint DDSU666 Modbus energy monitor (+0k6 code)
//#define USE_SOLAX_X1                             // Add support for Solax X1 series Modbus log info (+4k1 code)
//#define USE_LE01MR                               // Add support for F&F LE-01MR modbus energy meter

// -- Low level interface devices -----------------
//#define USE_DHT                                   // Disable support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor

//#define USE_MAX31855                              // Disable MAX31855 K-Type thermocouple sensor using softSPI

// -- IR Remote features --------------------------
//#define USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #define USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #define USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #define USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

// #define USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)
    #define IR_RCV_BUFFER_SIZE      100          // Max number of packets allowed in capture buffer (default 100 (*2 bytes ram))
    #define IR_RCV_TIMEOUT          15           // Number of milli-Seconds of no-more-data before we consider a message ended (default 15)
    #define IR_RCV_MIN_UNKNOWN_SIZE 6            // Set the smallest sized "UNKNOWN" message packets we actually care about (default 6, max 255)

// -- Zigbee interface ----------------------------
#define USE_ZIGBEE                                // Enable serial communication with Zigbee CC2530 flashed with ZNP (+49k code, +3k mem)
  #define USE_ZIGBEE_PANID  0x1A63                // arbitrary PAN ID for Zigbee network, must be unique in the home
  #define USE_ZIGBEE_EXTPANID 0xCCCCCCCCCCCCCCCCL // arbitrary extended PAN ID
  #define USE_ZIGBEE_CHANNEL  11                  // Zigbee Channel (11-26)
  #define USE_ZIGBEE_PRECFGKEY_L 0x0F0D0B0907050301L  // note: changing requires to re-pair all devices
  #define USE_ZIGBEE_PRECFGKEY_H 0x0D0C0A0806040200L  // note: changing requires to re-pair all devices
  #define USE_ZIGBEE_PERMIT_JOIN false           // don't allow joining by default
  #define USE_ZIGBEE_COALESCE_ATTR_TIMER 350     // timer to coalesce attribute values (in ms)


// ------------------------------------------------

//#define USE_SR04                                 // Add support for HC-SR04 ultrasonic devices (+1k code)

//#define USE_TM1638                               // Add support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
//#define USE_HX711                                // Add support for HX711 load cell (+1k5 code)
  #define USE_HX711_GUI                          // Add optional web GUI to HX711 as scale (+1k8 code)

//#define USE_TX20_WIND_SENSOR                     // Add support for La Crosse TX20 anemometer (+2k6/0k8 code)
//#define USE_TX23_WIND_SENSOR                     // Add support for La Crosse TX23 anemometer (+2k7/1k code)

//#define USE_RC_SWITCH                            // Add support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)

//#define USE_RF_SENSOR                            // Add support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)
//  #define USE_THEO_V2                            // Add support for decoding Theo V2 sensors as documented on https://sidweb.nl using 434MHz RF sensor receiver (+1k4 code)
//  #define USE_ALECTO_V2                          // Add support for decoding Alecto V2 sensors like ACH2010, WS3000 and DKW2012 using 868MHz RF sensor receiver (+1k7 code)

//#define USE_HRE                                  // Add support for Badger HR-E Water Meter (+1k4 code)
//#define USE_A4988_STEPPER                        // Add support for A4988 stepper-motor-driver-circuit (+10k5 code)

//#define USE_TASMOTA_CLIENT                       // Add support for Arduino Uno/Pro Mini via serial interface including flashing (+2k3 code, 44 mem)

#endif  // CUSTOM_CONFIG_ZIGBEE ******************************************************************
/*
oooooooooo.        .o.       ooooooooooooo ooooooooooooo oooooooooooo ooooooooo.   oooooo   oooo 
`888'   `Y8b      .888.      8'   888   `8 8'   888   `8 `888'     `8 `888   `Y88.  `888.   .8'  
 888     888     .8"888.          888           888       888          888   .d88'   `888. .8'   
 888oooo888'    .8' `888.         888           888       888oooo8     888ooo88P'     `888.8'    
 888    `88b   .88ooo8888.        888           888       888    "     888`88b.        `888'     
 888    .88P  .8'     `888.       888           888       888       o  888  `88b.       888      
o888bood8P'  o88o     o8888o     o888o         o888o     o888ooooood8 o888o  o888o     o888o     
*/
#ifdef CUSTOM_CONFIG_BATTERY  // *******************************************************************

#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "battery"

#define MODULE                 TUYA_DIMMER      // [Module] Defined TuyaMCU (54) as default

#define MQTT_CLEAN_SESSION   0                   // Mqtt clean session connection (0 = No clean session, 1 = Clean session (default))

#undef WIFI_SCAN_AT_RESTART                
#define WIFI_SCAN_AT_RESTART   false             // [SetOption56] Scan wifi network at restart for configured AP's
#undef WIFI_SCAN_REGULARLY    
#define WIFI_SCAN_REGULARLY    false             // [SetOption57] Scan wifi network every 44 minutes for configured AP's
#undef APP_DISABLE_POWERCYCLE
#define APP_DISABLE_POWERCYCLE true             // [SetOption65] Disable fast power cycle detection for device reset
#undef MQTT_TUYA_RECEIVED
#define MQTT_TUYA_RECEIVED     true             // [SetOption66] Enable TuyaMcuReceived messages over Mqtt
#undef KEY_DISABLE_MULTIPRESS 
#define KEY_DISABLE_MULTIPRESS true             // [SetOption1]  Disable button multipress
#undef BOOT_LOOP_OFFSET
#define BOOT_LOOP_OFFSET       0                 // [SetOption36] Number of boot loops before starting restoring defaults (0 = disable, 1..200 = boot loops offset)

#undef OTA_URL
#define OTA_URL                "OTA update can brick this device"  // [OtaUrl]

#define USE_HOME_ASSISTANT                       // Enable Home Assistant Discovery Support (+7k code)
#define USE_DOMOTICZ                             // Enable Domoticz (+6k code, +0.3k mem)

#define USE_WEBSERVER                            // Enable web server and Wifi Manager (+66k code, +8k mem)

#define USE_RULES                                // Add support for rules (+4k4 code)
#define USE_TUYA_MCU                             // Add support for Tuya Serial MCU
 #define USE_TUYA_TIME                           // Enable TuyaMCU sending local time to MCU

#define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)


#endif  // CUSTOM_CONFIG_BATTERY *******************************************************************
/*
 .oooooo..o   .oooooo.   ooooooooo.   ooooo ooooooooo.   ooooooooooooo ooooo ooooo      ooo   .oooooo.    
d8P'    `Y8  d8P'  `Y8b  `888   `Y88. `888' `888   `Y88. 8'   888   `8 `888' `888b.     `8'  d8P'  `Y8b   
Y88bo.      888           888   .d88'  888   888   .d88'      888       888   8 `88b.    8  888           
 `"Y8888o.  888           888ooo88P'   888   888ooo88P'       888       888   8   `88b.  8  888           
     `"Y88b 888           888`88b.     888   888              888       888   8     `88b.8  888     ooooo 
oo     .d8P `88b    ooo   888  `88b.   888   888              888       888   8       `888  `88.    .88'  
8""88888P'   `Y8bood8P'  o888o  o888o o888o o888o            o888o     o888o o8o        `8   `Y8bood8P'   
*/                                                     
#ifdef CUSTOM_CONFIG_SCRIPTING  // *******************************************************************

#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "scripting"

#undef OTA_URL
#define OTA_URL                " "  // [OtaUrl]

#define USE_DOMOTICZ                             // Enable Domoticz (+6k code, +0.3k mem)
#define USE_HOME_ASSISTANT                       // Enable Home Assistant Discovery Support (+4.1k code, +6 bytes mem)
#define USE_WEBSERVER                            // Enable web server and Wifi Manager (+66k code, +8k mem)
  #define USE_JAVASCRIPT_ES6                     // Enable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)
  #define USE_EMULATION_HUE                      // Enable Hue Bridge emulation for Alexa (+14k code, +2k mem common)
  #define USE_EMULATION_WEMO                     // Enable Belkin WeMo emulation for Alexa (+6k code, +2k mem common)

#define USE_DISCOVERY                            // Enable mDNS for the following services (+8k code or +23.5k code with core 2_5_x, +0.3k mem)
  #define WEBSERVER_ADVERTISE                    // Provide access to webserver by name <Hostname>.local/
  #define MQTT_HOST_DISCOVERY                    // Find MQTT host server (overrides MQTT_HOST if found)

#define USE_TIMERS                               // Add support for up to 16 timers (+2k2 code)
  #define USE_TIMERS_WEB                         // Add timer webpage support (+4k5 code)
  #define USE_SUNRISE                            // Add support for Sunrise and sunset tools (+16k)
    #define SUNRISE_DAWN_ANGLE DAWN_NORMAL       // Select desired Dawn Angle from (DAWN_NORMAL, DAWN_CIVIL, DAWN_NAUTIC, DAWN_ASTRONOMIC)

 #define SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

// #undef USE_RULES_COMPRESSION // temp fix for unishox compression

#define USE_SCRIPT                               // Add support for script
  #define USE_SCRIPT_JSON_EXPORT
  #define USE_SCRIPT_WEB_DISPLAY
//  #define USE_SENDMAIL
  // #define USE_SCRIPT_FATFS 4                     // Add support for script storage on SD card (+12k code, +4k mem)

// -- Optional modules ----------------------------
//#define ROTARY_V1                                // Add support for MI Desk Lamp
#define USE_SONOFF_RF                            // Add support for Sonoff Rf Bridge (+3k2 code)
  #define USE_RF_FLASH                           // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+2k7 code)
#define USE_SONOFF_SC                            // Add support for Sonoff Sc (+1k1 code)
#define USE_TUYA_MCU                             // Add support for Tuya Serial MCU
  #define TUYA_DIMMER_ID       0                 // Default dimmer Id
#define USE_ARMTRONIX_DIMMERS                    // Add support for Armtronix Dimmers (+1k4 code)
#define USE_PS_16_DZ                             // Add support for PS-16-DZ Dimmer (+2k code)
#define USE_SONOFF_IFAN                          // Add support for Sonoff iFan02 and iFan03 (+2k code)
#define USE_BUZZER                               // Add support for a buzzer (+0k6 code)
#define USE_ARILUX_RF                            // Add support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))
#define USE_SHUTTER                              // Add Shutter support for up to 4 shutter with different motortypes (+11k code)
#define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
#define USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+1k5 code)
//  #define EXS_MCU_CMNDS                          // Add command to send MCU commands (+0k8 code)
//#define USE_HOTPLUG                              // Add support for sensor HotPlug
#define USE_DEVICE_GROUPS                        // Add support for device groups (+5k6 code)
#define USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+2k5 code)
  #define USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer, also adds device groups support (+1k1 code plus device groups size)
//#define USE_KEELOQ                               // Add support for Jarolift rollers by Keeloq algorithm (+4k5 code)
#define USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer (+0k7 code)

// -- Optional light modules ----------------------
#define USE_WS2812                               // WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
//  #define USE_WS2812_DMA                         // DMA supports only GPIO03 (= Serial RXD) (+1k mem). When USE_WS2812_DMA is enabled expect Exceptions on Pow
  #define USE_WS2812_HARDWARE  NEO_HW_WS2812     // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106)
  #define USE_WS2812_CTYPE     NEO_GRB           // Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
#define USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1, Ailight and Lohas
#define USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
#define USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#define USE_SONOFF_L1                            // Add support for Sonoff L1 led control
#define USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller (+0k3 code)

// -- Counter input -------------------------------
#define USE_COUNTER                              // Enable inputs as counter (+0k8 code)

// -- Internal Analog input -----------------------
//#define USE_ADC_VCC                              // Display Vcc in Power status. Disable for use as Analog input on selected devices

// -- One wire sensors ----------------------------
#define USE_DS18x20                              // Add support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
//  #define W1_PARASITE_POWER                      // Optimize for parasite powered sensors

// -- I2C sensors ---------------------------------
#define USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)

#ifdef USE_I2C
//  #define USE_SHT                                // [I2cDriver8] Enable SHT1X sensor (+1k4 code)
//  #define USE_HTU                                // [I2cDriver9] Enable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
//  #define USE_BMP                                // [I2cDriver10] Enable BMP085/BMP180/BMP280/BME280 sensors (I2C addresses 0x76 and 0x77) (+4k4 code)
//    #define USE_BME680                           // Enable support for BME680 sensor using Bosch BME680 library (+4k code)
//  #define USE_BH1750                             // [I2cDriver11] Enable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
//  #define USE_VEML6070                           // [I2cDriver12] Enable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+1k5 code)
    #define USE_VEML6070_RSET    270000          // VEML6070, Rset in Ohm used on PCB board, default 270K = 270000ohm, range for this sensor: 220K ... 1Meg
    #define USE_VEML6070_SHOW_RAW                // VEML6070, shows the raw value of UV-A
//  #define USE_ADS1115                            // [I2cDriver13] Enable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
//  #define USE_INA219                             // [I2cDriver14] Enable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
//  #define USE_INA226                             // [I2cDriver35] Enable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
//  #define USE_SHT3X                              // [I2cDriver15] Enable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
//  #define USE_TSL2561                            // [I2cDriver16] Enable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
//  #define USE_TSL2591                            // [I2cDriver40] Enable TSL2591 sensor (I2C address 0x29) using library Adafruit_TSL2591 (+1k6 code)
//  #define USE_MGS                                // [I2cDriver17] Enable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
    #define MGS_SENSOR_ADDR    0x04              // Default Mutichannel Gas sensor i2c address
//  #define USE_SGP30                              // [I2cDriver18] Enable SGP30 sensor (I2C address 0x58) (+1k1 code)
//  #define USE_SI1145                             // [I2cDriver19] Enable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
//  #define USE_LM75AD                             // [I2cDriver20] Enable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
//  #define USE_APDS9960                           // [I2cDriver21] Enable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
//  #define USE_MCP230xx                           // [I2cDriver22] Enable MCP23008/MCP23017 - Must define I2C Address in #define USE_MCP230xx_ADDR below - range 0x20 - 0x27 (+4k7 code)
//    #define USE_MCP230xx_ADDR 0x20               // Enable MCP23008/MCP23017 I2C Address to use (Must be within range 0x20 through 0x26 - set according to your wired setup)
//    #define USE_MCP230xx_OUTPUT                  // Enable MCP23008/MCP23017 OUTPUT support through sensor29 commands (+1k5 code)
//    #define USE_MCP230xx_DISPLAYOUTPUT           // Enable MCP23008/MCP23017 to display state of OUTPUT pins on Web UI (+0k2 code)
//  #define USE_PCA9685                            // [I2cDriver1] Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
//    #define USE_PCA9685_ADDR 0x40                // Enable PCA9685 I2C Address to use (Must be within range 0x40 through 0x47 - set according to your wired setup)
//    #define USE_PCA9685_FREQ 50                  // Define default PWM frequency in Hz to be used (must be within 24 to 1526) - If other value is used, it will rever to 50Hz
//  #define USE_MPR121                             // [I2cDriver23] Enable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
//  #define USE_CCS811                             // [I2cDriver24] Enable CCS811 sensor (I2C address 0x5A) (+2k2 code)
//  #define USE_MPU6050                            // [I2cDriver25] Enable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+3K3 of code and 188 Bytes of RAM)
//    #define USE_MPU6050_DMP                      // Enable in MPU6050 to use the DMP on the chip, should create better results (+8k6 of code)
//  #define USE_DS3231                             // [I2cDriver26] Enable DS3231 external RTC in case no Wifi is avaliable. See docs in the source file (+1k2 code)
//    #define USE_RTC_ADDR  0x68                   // Default I2C address 0x68
//  #define USE_MGC3130                            // [I2cDriver27] Enable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
//  #define USE_MAX44009                           // [I2cDriver28] Enable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
//  #define USE_SCD30                              // [I2cDriver29] Enable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
//  #define USE_SPS30                              // [I2cDriver30] Enable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
  #define USE_ADE7953                            // [I2cDriver7] Enable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
//  #define USE_VL53L0X                            // [I2cDriver31] Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
//  #define USE_MLX90614                           // [I2cDriver32] Enable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
//  #define USE_CHIRP                              // [I2cDriver33] Enable CHIRP soil moisture sensor (variable I2C address, default 0x20)
//  #define USE_PAJ7620                            // [I2cDriver34] Enable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
//  #define USE_PCF8574                            // [I2cDriver2] Enable PCF8574 I/O Expander (I2C addresses 0x20 - 0x26 and 0x39 - 0x3F) (+1k9 code)
//  #define USE_HIH6                               // [I2cDriver36] Enable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
//  #define USE_DHT12                              // [I2cDriver41] Enable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
//  #define USE_DS1624                             // [I2cDriver42] Enable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F) (+1k2 code)
//  #define USE_AHT1x                              // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38) (+0k8 code)
//  #define USE_WEMOS_MOTOR_V1                     // [I2cDriver44] Enable Wemos motor driver V1 (I2C addresses 0x2D - 0x30) (+0k7 code)
//    #define WEMOS_MOTOR_V1_ADDR  0x30            // Default I2C address 0x30
//    #define WEMOS_MOTOR_V1_FREQ  1000            // Default frequency
//  #define USE_HDC1080                            // [I2cDriver45] Enable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)

//  #define USE_DISPLAY                            // Add I2C Display Support (+2k code)
    #define USE_DISPLAY_MODES1TO5                // Enable display mode 1 to 5 in addition to mode 0
    #define USE_DISPLAY_LCD                      // [DisplayModel 1] [I2cDriver3] Enable Lcd display (I2C addresses 0x27 and 0x3F) (+6k code)
    #define USE_DISPLAY_SSD1306                  // [DisplayModel 2] [I2cDriver4] Enable SSD1306 Oled 128x64 display (I2C addresses 0x3C and 0x3D) (+16k code)
    #define USE_DISPLAY_MATRIX                   // [DisplayModel 3] [I2cDriver5] Enable 8x8 Matrix display (I2C adresseses see below) (+11k code)
      #define MTX_ADDRESS1     0x71              // [DisplayAddress1] I2C address of first 8x8 matrix module
      #define MTX_ADDRESS2     0x74              // [DisplayAddress2] I2C address of second 8x8 matrix module
      #define MTX_ADDRESS3     0x75              // [DisplayAddress3] I2C address of third 8x8 matrix module
      #define MTX_ADDRESS4     0x72              // [DisplayAddress4] I2C address of fourth 8x8 matrix module
      #define MTX_ADDRESS5     0x73              // [DisplayAddress5] I2C address of fifth 8x8 matrix module
      #define MTX_ADDRESS6     0x76              // [DisplayAddress6] I2C address of sixth 8x8 matrix module
      #define MTX_ADDRESS7     0x00              // [DisplayAddress7] I2C address of seventh 8x8 matrix module
      #define MTX_ADDRESS8     0x00              // [DisplayAddress8] I2C address of eigth 8x8 matrix module
//    #define USE_DISPLAY_SH1106                   // [DisplayModel 7] [I2cDriver6] Enable SH1106 Oled 128x64 display (I2C addresses 0x3C and 0x3D)
#endif  // USE_I2C

// -- SPI sensors ---------------------------------
//#define USE_SPI                                  // Hardware SPI using GPIO12(MISO), GPIO13(MOSI) and GPIO14(CLK) in addition to two user selectable GPIOs(CS and DC)
#ifdef USE_SPI
//  #define USE_NRF24                              // Add SPI support for NRF24L01(+) (+2k6 code)
  #ifdef USE_NRF24
    #define USE_MIBLE                            // BLE-bridge for some Mijia-BLE-sensors (+4k7 code)
  #else
    #ifndef USE_DISPLAY
      #define USE_DISPLAY                        // Add SPI Display support for 320x240 and 480x320 TFT
    #endif
      #define USE_DISPLAY_ILI9341                // [DisplayModel 4] Enable ILI9341 Tft 480x320 display (+19k code)
//      #define USE_DISPLAY_EPAPER_29              // [DisplayModel 5] Enable e-paper 2.9 inch display (+19k code)
//      #define USE_DISPLAY_EPAPER_42              // [DisplayModel 6] Enable e-paper 4.2 inch display
//      #define USE_DISPLAY_ILI9488                // [DisplayModel 8] [I2cDriver38] (Touch)
//      #define USE_DISPLAY_SSD1351                // [DisplayModel 9]
//      #define USE_DISPLAY_RA8876                 // [DisplayModel 10] [I2cDriver39] (Touch)
  #endif  // USE_NRF24
#endif  // USE_SPI

// -- Serial sensors ------------------------------
//#define USE_MHZ19                                // Add support for MH-Z19 CO2 sensor (+2k code)
//#define USE_SENSEAIR                             // Add support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
  #define CO2_LOW              800               // Below this CO2 value show green light (needs PWM or WS2812 RG(B) led and enable with SetOption18 1)
  #define CO2_HIGH             1200              // Above this CO2 value show red light (needs PWM or WS2812 RG(B) led and enable with SetOption18 1)
//#define USE_PMS5003                              // Add support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
  //#define PMS_MODEL_PMS3003                      // Enable support of PMS3003 instead of PMS5003/PMS7003 (needs the USE_PMS5003 above)
//#define USE_NOVA_SDS                             // Add support for SDS011 and SDS021 particle concentration sensor (+1k5 code)
  #define STARTING_OFFSET      30                // Turn on NovaSDS XX-seconds before tele_period is reached
//#define USE_HPMA                                 // Add support for Honeywell HPMA115S0 particle concentration sensor (+1k4)
#define USE_SERIAL_BRIDGE                        // Add support for software Serial Bridge (+0k8 code)
//#define USE_MP3_PLAYER                           // Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
  #define MP3_VOLUME           10                // Set the startup volume on init, the range can be 0..30(max)
//#define USE_AZ7798                               // Add support for AZ-Instrument 7798 CO2 datalogger (+1k6 code)
//#define USE_PN532_HSU                            // Add support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
//  #define USE_PN532_CAUSE_EVENTS                 // Cause event execution for PN532_UID= and PN532_DATA=[if defined] (+ 30 bytes code)
//  #define USE_PN532_DATA_FUNCTION                // Add sensor40 command support for erase, setting data block content (+1k7 code, 388 bytes mem)
//  #define USE_PN532_DATA_RAW                     // Allow DATA block to be used by non-alpha-numberic data (+ 80 bytes code, 48 bytes ram)
//#define USE_RDM6300                              // Add support for RDM6300 125kHz RFID Reader (+0k8)
//#define USE_IBEACON                              // Add support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
//#define USE_GPS                                  // Add support for GPS and NTP Server for becoming Stratus 1 Time Source (+3k1 code, +132 bytes RAM)
//  #define USE_FLOG                               // Add support for GPS logging in OTA's Flash (Experimental) (+2k9 code, +8 bytes RAM)
//#define USE_HM10                                 // Add support for HM-10 as a BLE-bridge for the LYWSD03 (+5k1 code)
//#define USE_HRXL                                 // Add support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)

// -- Power monitoring sensors --------------------
#define USE_ENERGY_MARGIN_DETECTION              // Add support for Energy Margin detection (+1k6 code)
  #define USE_ENERGY_POWER_LIMIT                 // Add additional support for Energy Power Limit detection (+1k2 code)
#define USE_PZEM004T                             // Add support for PZEM004T Energy monitor (+2k code)
#define USE_PZEM_AC                              // Add support for PZEM014,016 Energy monitor (+1k1 code)
#define USE_PZEM_DC                              // Add support for PZEM003,017 Energy monitor (+1k1 code)
#define USE_MCP39F501                            // Add support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
//#define USE_SDM120                               // Add support for Eastron SDM120-Modbus energy monitor (+1k1 code)
  #define SDM120_SPEED         2400              // SDM120-Modbus RS485 serial speed (default: 2400 baud)
//#define USE_SDM630                               // Add support for Eastron SDM630-Modbus energy monitor (+0k6 code)
  #define SDM630_SPEED         9600              // SDM630-Modbus RS485 serial speed (default: 9600 baud)
//#define USE_DDS2382                              // Add support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
  #define DDS2382_SPEED        9600              // Hiking DDS2382 Modbus RS485 serial speed (default: 9600 baud)
//#define USE_DDSU666                              // Add support for Chint DDSU666 Modbus energy monitor (+0k6 code)
  #define DDSU666_SPEED        9600              // Chint DDSU666 Modbus RS485 serial speed (default: 9600 baud)
//#define USE_SOLAX_X1                             // Add support for Solax X1 series Modbus log info (+3k1 code)
  #define SOLAXX1_SPEED        9600              // Solax X1 Modbus RS485 serial speed (default: 9600 baud)
  #define SOLAXX1_PV2                            // Solax X1 using second PV
//#define USE_LE01MR                               // Add support for F&F LE-01MR Modbus energy monitor (+1k code)
  #define LE01MR_SPEED         9600              // LE-01MR modbus baudrate (default: 9600)
  #define LE01MR_ADDR          1                 // LE-01MR modbus address (default: 0x01)

// -- Low level interface devices -----------------
#define USE_DHT                                  // Add support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor (1k6 code)

//#define USE_MAX31855                             // Add support for MAX31855 K-Type thermocouple sensor using softSPI
//#define USE_MAX31865                             // Add support for MAX31865 RTD sensors using softSPI
  #define MAX31865_PTD_WIRES  2                 // PTDs come in several flavors. Pick yours
  #define MAX31865_PTD_RES    100               // Nominal PTD resistance at 0°C (100Ω for a PT100, 1000Ω for a PT1000, YMMV!)
  #define MAX31865_REF_RES    430               // Reference resistor (Usually 430Ω for a PT100, 4300Ω for a PT1000)
  #define MAX31865_PTD_BIAS   0                 // To calibrate your not-so-good PTD

// -- IR Remote features - all protocols from IRremoteESP8266 --------------------------
// IR Full Protocols mode is activated through platform.io only.
// Either use 'default_envs = tasmota-ircustom' and disable some features here to keep code not too big
// or use 'default_envs = tasmota-ir' for a pre-packaged IR-dedicated firmware
// When using 'tasmota-ircustom' or 'tasmota-ir', parameters below
// (USE_IR_REMOTE, USE_IR_RECEIVE, USE_IR_HVAC...) are IGNORED.
//
// Code impact of IR full protocols is +81k code, 3k mem
// You can reduce this size by disabling some protocols in "lib/IRremoteESP8266.x.x.x/src/IRremoteESP8266.h"

// -- IR Remote features - subset of IR protocols --------------------------
#define USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #define USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #define USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #define USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

  #define USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)
    #define IR_RCV_BUFFER_SIZE      100          // Max number of packets allowed in capture buffer (default 100 (*2 bytes ram))
    #define IR_RCV_TIMEOUT          15           // Number of milli-Seconds of no-more-data before we consider a message ended (default 15)
    #define IR_RCV_MIN_UNKNOWN_SIZE 6            // Set the smallest sized "UNKNOWN" message packets we actually care about (default 6, max 255)

// -- Zigbee interface ----------------------------
//#define USE_ZIGBEE                                // Enable serial communication with Zigbee CC2530 flashed with ZNP (+49k code, +3k mem)
  #define USE_ZIGBEE_PANID  0x1A63                // arbitrary PAN ID for Zigbee network, must be unique in the home
  #define USE_ZIGBEE_EXTPANID 0xCCCCCCCCCCCCCCCCL // arbitrary extended PAN ID
  #define USE_ZIGBEE_CHANNEL  11                  // Zigbee Channel (11-26)
  #define USE_ZIGBEE_PRECFGKEY_L 0x0F0D0B0907050301L  // note: changing requires to re-pair all devices
  #define USE_ZIGBEE_PRECFGKEY_H 0x0D0C0A0806040200L  // note: changing requires to re-pair all devices
  #define USE_ZIGBEE_PERMIT_JOIN false           // don't allow joining by default
  #define USE_ZIGBEE_COALESCE_ATTR_TIMER 350     // timer to coalesce attribute values (in ms)

// -- Other sensors/drivers -----------------------

//#define USE_SR04                                 // Add support for HC-SR04 ultrasonic devices (+1k code)

//#define USE_TM1638                               // Add support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
//#define USE_HX711                                // Add support for HX711 load cell (+1k5 code)
//  #define USE_HX711_GUI                          // Add optional web GUI to HX711 as scale (+1k8 code)

// Select none or only one of the below defines
//#define USE_TX20_WIND_SENSOR                     // Add support for La Crosse TX20 anemometer (+2k6/0k8 code)
//#define USE_TX23_WIND_SENSOR                     // Add support for La Crosse TX23 anemometer (+2k7/1k code)

//#define USE_RC_SWITCH                            // Add support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)

//#define USE_RF_SENSOR                            // Add support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)
//  #define USE_THEO_V2                            // Add support for decoding Theo V2 sensors as documented on https://sidweb.nl using 434MHz RF sensor receiver (+1k4 code)
//  #define USE_ALECTO_V2                          // Add support for decoding Alecto V2 sensors like ACH2010, WS3000 and DKW2012 weather stations using 868MHz RF sensor receiver (+1k7 code)

//#define USE_HRE                                  // Add support for Badger HR-E Water Meter (+1k4 code)
//#define USE_A4988_STEPPER                        // Add support for A4988/DRV8825 stepper-motor-driver-circuit (+10k5 code)

//#define USE_TASMOTA_CLIENT                       // Add support for Arduino Uno/Pro Mini via serial interface including flashing (+2k6 code, 64 mem)
  #define USE_TASMOTA_CLIENT_FLASH_SPEED 57600     // Usually 57600 for 3.3V variants and 115200 for 5V variants
  #define USE_TASMOTA_CLIENT_SERIAL_SPEED 57600    // Depends on the sketch that is running on the Uno/Pro Mini

#endif  // CUSTOM_CONFIG_SCRIPTING ******************************************************************

/*
oooooooooooo ooooo     ooo ooooo        ooooo        ooooooooo.   ooooo     ooo ooooo        oooooooooooo  .oooooo..o 
`888'     `8 `888'     `8' `888'        `888'        `888   `Y88. `888'     `8' `888'        `888'     `8 d8P'    `Y8 
 888          888       8   888          888          888   .d88'  888       8   888          888         Y88bo.      
 888oooo8     888       8   888          888          888ooo88P'   888       8   888          888oooo8     `"Y8888o.  
 888    "     888       8   888          888          888`88b.     888       8   888          888    "         `"Y88b 
 888          `88.    .8'   888       o  888       o  888  `88b.   `88.    .8'   888       o  888       o oo     .d8P 
o888o           `YbodP'    o888ooooood8 o888ooooood8 o888o  o888o    `YbodP'    o888ooooood8 o888ooooood8 8""88888P'  
*/                                                     
#ifdef CUSTOM_CONFIG_FULLRULES  // *******************************************************************

#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "fullrules"

#undef OTA_URL
#define OTA_URL                " "  // [OtaUrl]

#define USE_DOMOTICZ                             // Enable Domoticz (+6k code, +0.3k mem)
#define USE_HOME_ASSISTANT                       // Enable Home Assistant Discovery Support (+4.1k code, +6 bytes mem)
#define USE_WEBSERVER                            // Enable web server and Wifi Manager (+66k code, +8k mem)
  #define USE_JAVASCRIPT_ES6                     // Enable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)
  #define USE_EMULATION_HUE                      // Enable Hue Bridge emulation for Alexa (+14k code, +2k mem common)
  #define USE_EMULATION_WEMO                     // Enable Belkin WeMo emulation for Alexa (+6k code, +2k mem common)

#define USE_DISCOVERY                            // Enable mDNS for the following services (+8k code or +23.5k code with core 2_5_x, +0.3k mem)
  #define WEBSERVER_ADVERTISE                    // Provide access to webserver by name <Hostname>.local/
  #define MQTT_HOST_DISCOVERY                    // Find MQTT host server (overrides MQTT_HOST if found)

#define USE_TIMERS                               // Add support for up to 16 timers (+2k2 code)
  #define USE_TIMERS_WEB                         // Add timer webpage support (+4k5 code)
  #define USE_SUNRISE                            // Add support for Sunrise and sunset tools (+16k)
    #define SUNRISE_DAWN_ANGLE DAWN_NORMAL       // Select desired Dawn Angle from (DAWN_NORMAL, DAWN_CIVIL, DAWN_NAUTIC, DAWN_ASTRONOMIC)
#define USE_PING                                 // Enable Ping command (+2k code)

// -- Rules or Script  ----------------------------
// Select none or only one of the below defines
#define USE_RULES                                // Add support for rules (+8k code)
//#define USE_SCRIPT                               // Add support for script (+17k code)
  //#define USE_SCRIPT_FATFS 4                     // Script: Add FAT FileSystem Support

 #define USE_EXPRESSION                         // Add support for expression evaluation in rules (+3k2 code, +64 bytes mem)
   #define SUPPORT_IF_STATEMENT                 // Add support for IF statement in rules (+4k2 code, -332 bytes mem)
 #define SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

// -- Optional modules ----------------------------
//#define ROTARY_V1                                // Add support for MI Desk Lamp
#define USE_SONOFF_RF                            // Add support for Sonoff Rf Bridge (+3k2 code)
  #define USE_RF_FLASH                           // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+2k7 code)
#define USE_SONOFF_SC                            // Add support for Sonoff Sc (+1k1 code)
#define USE_TUYA_MCU                             // Add support for Tuya Serial MCU
  #define TUYA_DIMMER_ID       0                 // Default dimmer Id
#define USE_ARMTRONIX_DIMMERS                    // Add support for Armtronix Dimmers (+1k4 code)
#define USE_PS_16_DZ                             // Add support for PS-16-DZ Dimmer (+2k code)
#define USE_SONOFF_IFAN                          // Add support for Sonoff iFan02 and iFan03 (+2k code)
#define USE_BUZZER                               // Add support for a buzzer (+0k6 code)
#define USE_ARILUX_RF                            // Add support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))
#define USE_SHUTTER                              // Add Shutter support for up to 4 shutter with different motortypes (+11k code)
#define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
#define USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+1k5 code)
//  #define EXS_MCU_CMNDS                          // Add command to send MCU commands (+0k8 code)
//#define USE_HOTPLUG                              // Add support for sensor HotPlug
#define USE_DEVICE_GROUPS                        // Add support for device groups (+5k6 code)
#define USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+2k5 code)
  #define USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer, also adds device groups support (+1k1 code plus device groups size)
//#define USE_KEELOQ                               // Add support for Jarolift rollers by Keeloq algorithm (+4k5 code)
#define USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer (+0k7 code)

// -- Optional light modules ----------------------
#define USE_WS2812                               // WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
//  #define USE_WS2812_DMA                         // DMA supports only GPIO03 (= Serial RXD) (+1k mem). When USE_WS2812_DMA is enabled expect Exceptions on Pow
  #define USE_WS2812_HARDWARE  NEO_HW_WS2812     // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106)
  #define USE_WS2812_CTYPE     NEO_GRB           // Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
#define USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1, Ailight and Lohas
#define USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
#define USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#define USE_SONOFF_L1                            // Add support for Sonoff L1 led control
#define USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller (+0k3 code)

// -- Counter input -------------------------------
#define USE_COUNTER                              // Enable inputs as counter (+0k8 code)

// -- Internal Analog input -----------------------
//#define USE_ADC_VCC                              // Display Vcc in Power status. Disable for use as Analog input on selected devices

// -- One wire sensors ----------------------------
#define USE_DS18x20                              // Add support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
//  #define W1_PARASITE_POWER                      // Optimize for parasite powered sensors

// -- I2C sensors ---------------------------------
#define USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)

#ifdef USE_I2C
//  #define USE_SHT                                // [I2cDriver8] Enable SHT1X sensor (+1k4 code)
//  #define USE_HTU                                // [I2cDriver9] Enable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
//  #define USE_BMP                                // [I2cDriver10] Enable BMP085/BMP180/BMP280/BME280 sensors (I2C addresses 0x76 and 0x77) (+4k4 code)
//    #define USE_BME680                           // Enable support for BME680 sensor using Bosch BME680 library (+4k code)
//  #define USE_BH1750                             // [I2cDriver11] Enable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
//  #define USE_VEML6070                           // [I2cDriver12] Enable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+1k5 code)
    #define USE_VEML6070_RSET    270000          // VEML6070, Rset in Ohm used on PCB board, default 270K = 270000ohm, range for this sensor: 220K ... 1Meg
    #define USE_VEML6070_SHOW_RAW                // VEML6070, shows the raw value of UV-A
//  #define USE_ADS1115                            // [I2cDriver13] Enable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
//  #define USE_INA219                             // [I2cDriver14] Enable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
//  #define USE_INA226                             // [I2cDriver35] Enable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
//  #define USE_SHT3X                              // [I2cDriver15] Enable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
//  #define USE_TSL2561                            // [I2cDriver16] Enable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
//  #define USE_TSL2591                            // [I2cDriver40] Enable TSL2591 sensor (I2C address 0x29) using library Adafruit_TSL2591 (+1k6 code)
//  #define USE_MGS                                // [I2cDriver17] Enable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
    #define MGS_SENSOR_ADDR    0x04              // Default Mutichannel Gas sensor i2c address
//  #define USE_SGP30                              // [I2cDriver18] Enable SGP30 sensor (I2C address 0x58) (+1k1 code)
//  #define USE_SI1145                             // [I2cDriver19] Enable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
//  #define USE_LM75AD                             // [I2cDriver20] Enable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
//  #define USE_APDS9960                           // [I2cDriver21] Enable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
//  #define USE_MCP230xx                           // [I2cDriver22] Enable MCP23008/MCP23017 - Must define I2C Address in #define USE_MCP230xx_ADDR below - range 0x20 - 0x27 (+4k7 code)
//    #define USE_MCP230xx_ADDR 0x20               // Enable MCP23008/MCP23017 I2C Address to use (Must be within range 0x20 through 0x26 - set according to your wired setup)
//    #define USE_MCP230xx_OUTPUT                  // Enable MCP23008/MCP23017 OUTPUT support through sensor29 commands (+1k5 code)
//    #define USE_MCP230xx_DISPLAYOUTPUT           // Enable MCP23008/MCP23017 to display state of OUTPUT pins on Web UI (+0k2 code)
//  #define USE_PCA9685                            // [I2cDriver1] Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
//    #define USE_PCA9685_ADDR 0x40                // Enable PCA9685 I2C Address to use (Must be within range 0x40 through 0x47 - set according to your wired setup)
//    #define USE_PCA9685_FREQ 50                  // Define default PWM frequency in Hz to be used (must be within 24 to 1526) - If other value is used, it will rever to 50Hz
//  #define USE_MPR121                             // [I2cDriver23] Enable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
//  #define USE_CCS811                             // [I2cDriver24] Enable CCS811 sensor (I2C address 0x5A) (+2k2 code)
//  #define USE_MPU6050                            // [I2cDriver25] Enable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+3K3 of code and 188 Bytes of RAM)
//    #define USE_MPU6050_DMP                      // Enable in MPU6050 to use the DMP on the chip, should create better results (+8k6 of code)
//  #define USE_DS3231                             // [I2cDriver26] Enable DS3231 external RTC in case no Wifi is avaliable. See docs in the source file (+1k2 code)
//    #define USE_RTC_ADDR  0x68                   // Default I2C address 0x68
//  #define USE_MGC3130                            // [I2cDriver27] Enable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
//  #define USE_MAX44009                           // [I2cDriver28] Enable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
//  #define USE_SCD30                              // [I2cDriver29] Enable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
//  #define USE_SPS30                              // [I2cDriver30] Enable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
  #define USE_ADE7953                            // [I2cDriver7] Enable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
//  #define USE_VL53L0X                            // [I2cDriver31] Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
//  #define USE_MLX90614                           // [I2cDriver32] Enable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
//  #define USE_CHIRP                              // [I2cDriver33] Enable CHIRP soil moisture sensor (variable I2C address, default 0x20)
//  #define USE_PAJ7620                            // [I2cDriver34] Enable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
//  #define USE_PCF8574                            // [I2cDriver2] Enable PCF8574 I/O Expander (I2C addresses 0x20 - 0x26 and 0x39 - 0x3F) (+1k9 code)
//  #define USE_HIH6                               // [I2cDriver36] Enable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
//  #define USE_DHT12                              // [I2cDriver41] Enable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
//  #define USE_DS1624                             // [I2cDriver42] Enable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F) (+1k2 code)
//  #define USE_AHT1x                              // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38) (+0k8 code)
//  #define USE_WEMOS_MOTOR_V1                     // [I2cDriver44] Enable Wemos motor driver V1 (I2C addresses 0x2D - 0x30) (+0k7 code)
//    #define WEMOS_MOTOR_V1_ADDR  0x30            // Default I2C address 0x30
//    #define WEMOS_MOTOR_V1_FREQ  1000            // Default frequency
//  #define USE_HDC1080                            // [I2cDriver45] Enable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)

//  #define USE_DISPLAY                            // Add I2C Display Support (+2k code)
    #define USE_DISPLAY_MODES1TO5                // Enable display mode 1 to 5 in addition to mode 0
    #define USE_DISPLAY_LCD                      // [DisplayModel 1] [I2cDriver3] Enable Lcd display (I2C addresses 0x27 and 0x3F) (+6k code)
    #define USE_DISPLAY_SSD1306                  // [DisplayModel 2] [I2cDriver4] Enable SSD1306 Oled 128x64 display (I2C addresses 0x3C and 0x3D) (+16k code)
    #define USE_DISPLAY_MATRIX                   // [DisplayModel 3] [I2cDriver5] Enable 8x8 Matrix display (I2C adresseses see below) (+11k code)
      #define MTX_ADDRESS1     0x71              // [DisplayAddress1] I2C address of first 8x8 matrix module
      #define MTX_ADDRESS2     0x74              // [DisplayAddress2] I2C address of second 8x8 matrix module
      #define MTX_ADDRESS3     0x75              // [DisplayAddress3] I2C address of third 8x8 matrix module
      #define MTX_ADDRESS4     0x72              // [DisplayAddress4] I2C address of fourth 8x8 matrix module
      #define MTX_ADDRESS5     0x73              // [DisplayAddress5] I2C address of fifth 8x8 matrix module
      #define MTX_ADDRESS6     0x76              // [DisplayAddress6] I2C address of sixth 8x8 matrix module
      #define MTX_ADDRESS7     0x00              // [DisplayAddress7] I2C address of seventh 8x8 matrix module
      #define MTX_ADDRESS8     0x00              // [DisplayAddress8] I2C address of eigth 8x8 matrix module
//    #define USE_DISPLAY_SH1106                   // [DisplayModel 7] [I2cDriver6] Enable SH1106 Oled 128x64 display (I2C addresses 0x3C and 0x3D)
#endif  // USE_I2C

// -- SPI sensors ---------------------------------
//#define USE_SPI                                  // Hardware SPI using GPIO12(MISO), GPIO13(MOSI) and GPIO14(CLK) in addition to two user selectable GPIOs(CS and DC)
#ifdef USE_SPI
//  #define USE_NRF24                              // Add SPI support for NRF24L01(+) (+2k6 code)
  #ifdef USE_NRF24
    #define USE_MIBLE                            // BLE-bridge for some Mijia-BLE-sensors (+4k7 code)
  #else
    #ifndef USE_DISPLAY
      #define USE_DISPLAY                        // Add SPI Display support for 320x240 and 480x320 TFT
    #endif
      #define USE_DISPLAY_ILI9341                // [DisplayModel 4] Enable ILI9341 Tft 480x320 display (+19k code)
//      #define USE_DISPLAY_EPAPER_29              // [DisplayModel 5] Enable e-paper 2.9 inch display (+19k code)
//      #define USE_DISPLAY_EPAPER_42              // [DisplayModel 6] Enable e-paper 4.2 inch display
//      #define USE_DISPLAY_ILI9488                // [DisplayModel 8] [I2cDriver38] (Touch)
//      #define USE_DISPLAY_SSD1351                // [DisplayModel 9]
//      #define USE_DISPLAY_RA8876                 // [DisplayModel 10] [I2cDriver39] (Touch)
  #endif  // USE_NRF24
#endif  // USE_SPI

// -- Serial sensors ------------------------------
//#define USE_MHZ19                                // Add support for MH-Z19 CO2 sensor (+2k code)
//#define USE_SENSEAIR                             // Add support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
  #define CO2_LOW              800               // Below this CO2 value show green light (needs PWM or WS2812 RG(B) led and enable with SetOption18 1)
  #define CO2_HIGH             1200              // Above this CO2 value show red light (needs PWM or WS2812 RG(B) led and enable with SetOption18 1)
//#define USE_PMS5003                              // Add support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
  //#define PMS_MODEL_PMS3003                      // Enable support of PMS3003 instead of PMS5003/PMS7003 (needs the USE_PMS5003 above)
//#define USE_NOVA_SDS                             // Add support for SDS011 and SDS021 particle concentration sensor (+1k5 code)
  #define STARTING_OFFSET      30                // Turn on NovaSDS XX-seconds before tele_period is reached
//#define USE_HPMA                                 // Add support for Honeywell HPMA115S0 particle concentration sensor (+1k4)
#define USE_SERIAL_BRIDGE                        // Add support for software Serial Bridge (+0k8 code)
//#define USE_MP3_PLAYER                           // Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
  #define MP3_VOLUME           10                // Set the startup volume on init, the range can be 0..30(max)
//#define USE_AZ7798                               // Add support for AZ-Instrument 7798 CO2 datalogger (+1k6 code)
//#define USE_PN532_HSU                            // Add support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
//  #define USE_PN532_CAUSE_EVENTS                 // Cause event execution for PN532_UID= and PN532_DATA=[if defined] (+ 30 bytes code)
//  #define USE_PN532_DATA_FUNCTION                // Add sensor40 command support for erase, setting data block content (+1k7 code, 388 bytes mem)
//  #define USE_PN532_DATA_RAW                     // Allow DATA block to be used by non-alpha-numberic data (+ 80 bytes code, 48 bytes ram)
//#define USE_RDM6300                              // Add support for RDM6300 125kHz RFID Reader (+0k8)
//#define USE_IBEACON                              // Add support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
//#define USE_GPS                                  // Add support for GPS and NTP Server for becoming Stratus 1 Time Source (+3k1 code, +132 bytes RAM)
//  #define USE_FLOG                               // Add support for GPS logging in OTA's Flash (Experimental) (+2k9 code, +8 bytes RAM)
//#define USE_HM10                                 // Add support for HM-10 as a BLE-bridge for the LYWSD03 (+5k1 code)
//#define USE_HRXL                                 // Add support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)

// -- Power monitoring sensors --------------------
#define USE_ENERGY_MARGIN_DETECTION              // Add support for Energy Margin detection (+1k6 code)
  #define USE_ENERGY_POWER_LIMIT                 // Add additional support for Energy Power Limit detection (+1k2 code)
#define USE_PZEM004T                             // Add support for PZEM004T Energy monitor (+2k code)
#define USE_PZEM_AC                              // Add support for PZEM014,016 Energy monitor (+1k1 code)
#define USE_PZEM_DC                              // Add support for PZEM003,017 Energy monitor (+1k1 code)
#define USE_MCP39F501                            // Add support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
//#define USE_SDM120                               // Add support for Eastron SDM120-Modbus energy monitor (+1k1 code)
  #define SDM120_SPEED         2400              // SDM120-Modbus RS485 serial speed (default: 2400 baud)
//#define USE_SDM630                               // Add support for Eastron SDM630-Modbus energy monitor (+0k6 code)
  #define SDM630_SPEED         9600              // SDM630-Modbus RS485 serial speed (default: 9600 baud)
//#define USE_DDS2382                              // Add support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
  #define DDS2382_SPEED        9600              // Hiking DDS2382 Modbus RS485 serial speed (default: 9600 baud)
//#define USE_DDSU666                              // Add support for Chint DDSU666 Modbus energy monitor (+0k6 code)
  #define DDSU666_SPEED        9600              // Chint DDSU666 Modbus RS485 serial speed (default: 9600 baud)
//#define USE_SOLAX_X1                             // Add support for Solax X1 series Modbus log info (+3k1 code)
  #define SOLAXX1_SPEED        9600              // Solax X1 Modbus RS485 serial speed (default: 9600 baud)
  #define SOLAXX1_PV2                            // Solax X1 using second PV
//#define USE_LE01MR                               // Add support for F&F LE-01MR Modbus energy monitor (+1k code)
  #define LE01MR_SPEED         9600              // LE-01MR modbus baudrate (default: 9600)
  #define LE01MR_ADDR          1                 // LE-01MR modbus address (default: 0x01)

// -- Low level interface devices -----------------
#define USE_DHT                                  // Add support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor (1k6 code)

//#define USE_MAX31855                             // Add support for MAX31855 K-Type thermocouple sensor using softSPI
//#define USE_MAX31865                             // Add support for MAX31865 RTD sensors using softSPI
  #define MAX31865_PTD_WIRES  2                 // PTDs come in several flavors. Pick yours
  #define MAX31865_PTD_RES    100               // Nominal PTD resistance at 0°C (100Ω for a PT100, 1000Ω for a PT1000, YMMV!)
  #define MAX31865_REF_RES    430               // Reference resistor (Usually 430Ω for a PT100, 4300Ω for a PT1000)
  #define MAX31865_PTD_BIAS   0                 // To calibrate your not-so-good PTD

// -- IR Remote features - all protocols from IRremoteESP8266 --------------------------
// IR Full Protocols mode is activated through platform.io only.
// Either use 'default_envs = tasmota-ircustom' and disable some features here to keep code not too big
// or use 'default_envs = tasmota-ir' for a pre-packaged IR-dedicated firmware
// When using 'tasmota-ircustom' or 'tasmota-ir', parameters below
// (USE_IR_REMOTE, USE_IR_RECEIVE, USE_IR_HVAC...) are IGNORED.
//
// Code impact of IR full protocols is +81k code, 3k mem
// You can reduce this size by disabling some protocols in "lib/IRremoteESP8266.x.x.x/src/IRremoteESP8266.h"

// -- IR Remote features - subset of IR protocols --------------------------
#define USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #define USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #define USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #define USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

  #define USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)
    #define IR_RCV_BUFFER_SIZE      100          // Max number of packets allowed in capture buffer (default 100 (*2 bytes ram))
    #define IR_RCV_TIMEOUT          15           // Number of milli-Seconds of no-more-data before we consider a message ended (default 15)
    #define IR_RCV_MIN_UNKNOWN_SIZE 6            // Set the smallest sized "UNKNOWN" message packets we actually care about (default 6, max 255)

// -- Zigbee interface ----------------------------
//#define USE_ZIGBEE                                // Enable serial communication with Zigbee CC2530 flashed with ZNP (+49k code, +3k mem)
  #define USE_ZIGBEE_PANID  0x1A63                // arbitrary PAN ID for Zigbee network, must be unique in the home
  #define USE_ZIGBEE_EXTPANID 0xCCCCCCCCCCCCCCCCL // arbitrary extended PAN ID
  #define USE_ZIGBEE_CHANNEL  11                  // Zigbee Channel (11-26)
  #define USE_ZIGBEE_PRECFGKEY_L 0x0F0D0B0907050301L  // note: changing requires to re-pair all devices
  #define USE_ZIGBEE_PRECFGKEY_H 0x0D0C0A0806040200L  // note: changing requires to re-pair all devices
  #define USE_ZIGBEE_PERMIT_JOIN false           // don't allow joining by default
  #define USE_ZIGBEE_COALESCE_ATTR_TIMER 350     // timer to coalesce attribute values (in ms)

// -- Other sensors/drivers -----------------------

//#define USE_SR04                                 // Add support for HC-SR04 ultrasonic devices (+1k code)

//#define USE_TM1638                               // Add support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
//#define USE_HX711                                // Add support for HX711 load cell (+1k5 code)
//  #define USE_HX711_GUI                          // Add optional web GUI to HX711 as scale (+1k8 code)

// Select none or only one of the below defines
//#define USE_TX20_WIND_SENSOR                     // Add support for La Crosse TX20 anemometer (+2k6/0k8 code)
//#define USE_TX23_WIND_SENSOR                     // Add support for La Crosse TX23 anemometer (+2k7/1k code)

//#define USE_RC_SWITCH                            // Add support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)

//#define USE_RF_SENSOR                            // Add support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)
//  #define USE_THEO_V2                            // Add support for decoding Theo V2 sensors as documented on https://sidweb.nl using 434MHz RF sensor receiver (+1k4 code)
//  #define USE_ALECTO_V2                          // Add support for decoding Alecto V2 sensors like ACH2010, WS3000 and DKW2012 weather stations using 868MHz RF sensor receiver (+1k7 code)

//#define USE_HRE                                  // Add support for Badger HR-E Water Meter (+1k4 code)
//#define USE_A4988_STEPPER                        // Add support for A4988/DRV8825 stepper-motor-driver-circuit (+10k5 code)

//#define USE_TASMOTA_CLIENT                       // Add support for Arduino Uno/Pro Mini via serial interface including flashing (+2k6 code, 64 mem)
  #define USE_TASMOTA_CLIENT_FLASH_SPEED 57600     // Usually 57600 for 3.3V variants and 115200 for 5V variants
  #define USE_TASMOTA_CLIENT_SERIAL_SPEED 57600    // Depends on the sketch that is running on the Uno/Pro Mini
#endif  // CUSTOM_CONFIG_FULLRULES *******************************************************************

/*
ooo        ooooo oooooooooooo   .oooooo.          .o.       
`88.       .888' `888'     `8  d8P'  `Y8b        .888.      
 888b     d'888   888         888               .8"888.     
 8 Y88. .P  888   888oooo8    888              .8' `888.    
 8  `888'   888   888    "    888     ooooo   .88ooo8888.   
 8    Y     888   888       o `88.    .88'   .8'     `888.  
o8o        o888o o888ooooood8  `Y8bood8P'   o88o     o8888o 
*/
#ifdef CUSTOM_CONFIG_MEGA // ************************************************************************
                                    
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "mega"

#define USE_DOMOTICZ                             // Enable Domoticz (+6k code, +0.3k mem)
#define USE_HOME_ASSISTANT                       // Enable Home Assistant Discovery Support (+7k code)

// #define MQTT_TELE_RETAIN     0                   // Tele messages may send retain flag (0 = off, 1 = on)
// #define MQTT_CLEAN_SESSION   1                   // Mqtt clean session connection (0 = No clean session, 1 = Clean session (default))
//#define USE_MQTT_TLS                             // Use TLS for MQTT connection (+34.5k code, +7.0k mem and +4.8k additional during connection handshake)
//  #define USE_MQTT_TLS_CA_CERT                   // Force full CA validation instead of fingerprints, slower, but simpler to use (+2.2k code, +1.9k mem during connection handshake)
//  #define USE_MQTT_TLS_FORCE_EC_CIPHER           // Force Elliptic Curve cipher (higher security) required by some servers (automatically enabled with USE_MQTT_AWS_IOT) (+11.4k code, +0.4k mem)
//  #define USE_MQTT_AWS_IOT                       // Enable MQTT for AWS IoT - requires a private key (+11.9k code, +0.4k mem)

//#define USE_KNX                                  // Enable KNX IP Protocol Support (+9.4k code, +3k7 mem)
#define USE_WEBSERVER                            // Enable web server and Wifi Manager (+66k code, +8k mem)
  #define USE_JAVASCRIPT_ES6                     // Enable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)
//  #define USE_WEBSEND_RESPONSE                   // Enable command WebSend response message (+1k code)
 #define USE_EMULATION_HUE                      // Enable Hue Bridge emulation for Alexa (+18k code, +2k mem)
 #define USE_EMULATION_WEMO                     // Enable Belkin WeMo emulation for Alexa (+18k code, +2k mem)

// #define USE_DISCOVERY                            // Enable mDNS for the following services (+8k code, +0.3k mem)
#define USE_TIMERS                               // Add support for up to 16 timers (+2k2 code)
  #define USE_TIMERS_WEB                         // Add timer webpage support (+4k5 code)
  #define USE_SUNRISE                            // Add support for Sunrise and sunset tools (+16k)
#define USE_PING                                 // Enable Ping command (+2k code)

#define USE_RULES                                // Add support for rules (+4k4 code)
 #define USE_EXPRESSION                         // Add support for expression evaluation in rules (+3k2 code, +64 bytes mem)
   #define SUPPORT_IF_STATEMENT                 // Add support for IF statement in rules (+4k2 code, -332 bytes mem)
 #define SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

//#define USE_SCRIPT                               // Add support for script
  #define USE_SCRIPT_FATFS 4                     // Add support for script storage on SD card (+12k code, +4k mem)

// -- Optional modules ----------------------------
//#define ROTARY_V1                                // Add support for MI Desk Lamp
#define USE_SONOFF_RF                            // Add support for Sonoff Rf Bridge
 #define USE_RF_FLASH                           // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+3k code)
#define USE_SONOFF_SC                            // Add support for Sonoff Sc (+1k1 code)
#define USE_TUYA_MCU                             // Add support for Tuya Serial Dimmer
#define USE_ARMTRONIX_DIMMERS                    // Add support for Armtronix Dimmers (+1k4 code)
#define USE_PS_16_DZ                             // Add support for PS-16-DZ Dimmer and Sonoff L1 (+2k code)
#define USE_SONOFF_IFAN                          // Add support for Sonoff iFan02 and iFan03 (+2k code)
#define USE_BUZZER                               // Add support for a buzzer (+0k6 code)
#define USE_ARILUX_RF                            // Add support for Arilux RF remote controller (+1k code, 252 iram (non 2.3.0))
#define USE_SHUTTER                              // Add Shutter support for up to 4 shutter with different motortypes (+6k code)
#define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
#define USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+2k6 code)
#define USE_HOTPLUG                              // Add support for HotPlug
#define USE_DEVICE_GROUPS                      // Add support for device groups (+4k code)
#define USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+4k5 code)
 #define USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer, also adds device groups support (+0k7 code, also includes device groups)
#define USE_KEELOQ                               // Add support for Jarolift rollers by Keeloq algorithm (+4k5 code)
#define USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer

// -- Optional light modules ----------------------
#define USE_WS2812                               // WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
//  #define USE_WS2812_DMA                         // DMA supports only GPIO03 (= Serial RXD) (+1k mem). When USE_WS2812_DMA is enabled expect Exceptions on Pow
  #define USE_WS2812_HARDWARE  NEO_HW_WS2812     // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106)
  #define USE_WS2812_CTYPE     NEO_GRB           // WS2812 Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
#define USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1 and Ailight
#define USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
#define USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#define USE_SONOFF_L1                            // Add support for Sonoff L1 led control
#define USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller

#define USE_COUNTER                              // Enable counters
//#define USE_ADC_VCC                              // Display Vcc in Power status. Disable for use as Analog input on selected devices

#define USE_DS18x20                              // Add support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
//  #define W1_PARASITE_POWER                      // If using USE_DS18x20 then optimize for parasite powered sensors

// -- I2C sensors ---------------------------------
#define USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)
#ifdef USE_I2C
 #define USE_SHT                                // Enable SHT1X sensor (+1k4 code)
  #define USE_HTU                                // Enable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
  #define USE_BMP                                // Enable BMP085/BMP180/BMP280/BME280 sensor (I2C address 0x76 or 0x77) (+4k code)
    #define USE_BME680                           // Enable support for BME680 sensor using Bosch BME680 library (+4k code)
  #define USE_BH1750                             // Enable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
 #define USE_VEML6070                           // Enable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+0k5 code)
 #define USE_ADS1115                            // Enable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
 #define USE_INA219                             // Enable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
 #define USE_INA226                             // Enable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
 #define USE_SHT3X                              // Enable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
 #define USE_TSL2561                            // Enable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
 #define USE_TSL2591                            // Enable TSL2591 sensor (I2C address 0x29, 0x39 or 0x49) using library Adafruit_TSL2591 (+2k3 code)
 #define USE_MGS                                // Enable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
    // #define MGS_SENSOR_ADDR    0x04              // Default Mutichannel Gas sensor i2c address
 #define USE_SGP30                              // Enable SGP30 sensor (I2C address 0x58) (+1k1 code)
 #define USE_SI1145                             // Enable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
 #define USE_LM75AD                             // Enable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
 #define USE_APDS9960                           // Enable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
 #define USE_MCP230xx                           // Enable MCP23008/MCP23017 for GP INPUT ONLY (I2C addresses 0x20 - 0x27) providing command Sensor29 for configuration (+2k2 code)
   #define USE_MCP230xx_ADDR 0x20               // Enable MCP23008/MCP23017 I2C Address to use (Must be within range 0x20 through 0x27 - set according to your wired setup)
   #define USE_MCP230xx_OUTPUT                  // Enable MCP23008/MCP23017 OUTPUT support through sensor29 commands (+1k code)
   #define USE_MCP230xx_DISPLAYOUTPUT           // Enable MCP23008/MCP23017 to display state of OUTPUT pins on Web UI (+0k2 code)
 #define USE_PCA9685                            // Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
    #define USE_PCA9685_ADDR 0x40                // Enable PCA9685 I2C Address to use (Must be within range 0x40 through 0x47 - set according to your wired setup)
   #define USE_PCA9685_FREQ 50                  // Define default PWM frequency in Hz to be used (must be within 24 to 1526) - If other value is used, it will rever to 50Hz
 #define USE_MPR121                             // Enable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
 #define USE_CCS811                             // Enable CCS811 sensor (I2C address 0x5A) (+2k2 code)
 #define USE_MPU6050                            // Enable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+2k6 code)
 #define USE_DS3231                             // Enable DS3231 external RTC in case no Wifi is avaliable. See docs in the source file (+1k2 code)
   #define USE_RTC_ADDR  0x68                   // Default I2C address 0x68
 #define USE_MGC3130                            // Enable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
 #define USE_MAX44009                           // Enable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
 #define USE_SCD30                              // Enable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
 #define USE_SPS30                              // Enable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
  #define USE_ADE7953                            // Enable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
 #define USE_VL53L0X                            // Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
 #define USE_MLX90614                           // Enable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
//  #define USE_CHIRP                              // Enable CHIRP soil moisture sensor (variable I2C address, default 0x20)
 #define USE_PAJ7620                            // Enable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
 #define USE_PCF8574                            // Enable PCF8574 I/O Expander (I2C addresses 0x20 - 0x27 and 0x38 - 0x3F) (+1k9 code)
 #define USE_HIH6                               // Enable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
 #define USE_DHT12                              // [I2cDriver41] Enable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
 #define USE_DS1624                             // [I2cDriver42] Enable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F)
 #define USE_AHT1x                              // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38) (+0k8 code)
 #define USE_WEMOS_MOTOR_V1                     // [I2cDriver44] Enable Wemos motor driver V1 ()
 #define USE_HDC1080                            // [I2cDriver45] Enable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)
 #define USE_IAQ                                // [I2cDriver46] Enable iAQ-core air quality sensor (I2C address 0x5a) (+0k6 code)
 #define USE_AS3935                              // [I2cDriver48] Enable AS3935 Franklin Lightning Sensor (I2C address 0x03) (+5k4 code)

//  #define USE_DISPLAY                            // Add I2C Display Support (+2k code)
    // #define USE_DISPLAY_MODES1TO5                // Enable display mode 1 to 5 in addition to mode 0
    #define USE_DISPLAY_LCD                      // [DisplayModel 1] [I2cDriver3] Enable Lcd display (I2C addresses 0x27 and 0x3F) (+6k code)
    // #define USE_DISPLAY_SSD1306                  // [DisplayModel 2] [I2cDriver4] Enable SSD1306 Oled 128x64 display (I2C addresses 0x3C and 0x3D) (+16k code)
    // #define USE_DISPLAY_MATRIX                   // [DisplayModel 3] [I2cDriver5] Enable 8x8 Matrix display (I2C adresseses see below) (+11k code)
      // #define MTX_ADDRESS1     0x71              // [DisplayAddress1] I2C address of first 8x8 matrix module
      // #define MTX_ADDRESS2     0x74              // [DisplayAddress2] I2C address of second 8x8 matrix module
      // #define MTX_ADDRESS3     0x75              // [DisplayAddress3] I2C address of third 8x8 matrix module
      // #define MTX_ADDRESS4     0x72              // [DisplayAddress4] I2C address of fourth 8x8 matrix module
      // #define MTX_ADDRESS5     0x73              // [DisplayAddress5] I2C address of fifth 8x8 matrix module
      // #define MTX_ADDRESS6     0x76              // [DisplayAddress6] I2C address of sixth 8x8 matrix module
      // #define MTX_ADDRESS7     0x00              // [DisplayAddress7] I2C address of seventh 8x8 matrix module
      // #define MTX_ADDRESS8     0x00              // [DisplayAddress8] I2C address of eigth 8x8 matrix module
    // #define USE_DISPLAY_SEVENSEG                 // [DisplayModel 11] [I2cDriver47] Enable sevenseg display (I2C 0x70-0x77) (<+11k code)
      // #define SEVENSEG_ADDRESS1     0x70         // [DisplayAddress1] I2C address of first sevenseg matrix module
  //  #define USE_DISPLAY_SH1106                   // [DisplayModel 7] [I2cDriver6] Enable SH1106 Oled 128x64 display (I2C addresses 0x3C and 0x3D)

#endif   // USE_I2C

// -- SPI sensors ---------------------------------
// #define USE_SPI                                  // Hardware SPI using GPIO12(MISO), GPIO13(MOSI) and GPIO14(CLK) in addition to two user selectable GPIOs(CS and DC)
#ifdef USE_SPI
//  #define USE_NRF24                              // Add SPI support for NRF24L01(+) (+2k6 code)
  #ifdef USE_NRF24
    // #define USE_MIBLE                            // BLE-bridge for some Mijia-BLE-sensors (+4k7 code)
  #else
    #ifndef USE_DISPLAY
      #define USE_DISPLAY                        // Add SPI Display support for 320x240 and 480x320 TFT
    #endif
      // #define USE_DISPLAY_ILI9341                // [DisplayModel 4] Enable ILI9341 Tft 480x320 display (+19k code)
      // #define USE_DISPLAY_EPAPER_29              // [DisplayModel 5] Enable e-paper 2.9 inch display (+19k code)
      // #define USE_DISPLAY_EPAPER_42              // [DisplayModel 6] Enable e-paper 4.2 inch display
      // #define USE_DISPLAY_ILI9488                // [DisplayModel 8] [I2cDriver38] (Touch)
      // #define USE_DISPLAY_SSD1351                // [DisplayModel 9]
      // #define USE_DISPLAY_RA8876                 // [DisplayModel 10] [I2cDriver39] (Touch)
  #endif  // USE_NRF24
#endif  // USE_SPI

// -- Serial sensors ------------------------------
#define USE_MHZ19                                // Add support for MH-Z19 CO2 sensor (+2k code)
#define USE_SENSEAIR                             // Add support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
#define USE_PMS5003                              // Add support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
#define USE_NOVA_SDS                             // Add support for SDS011 and SDS021 particle concentration sensor (+0k7 code)
#define USE_HPMA                                 // Add support for Honeywell HPMA115S0 particle concentration sensor (+1k4)
#define USE_SERIAL_BRIDGE                        // Add support for software Serial Bridge (+1k1 code)
#define USE_MP3_PLAYER                           // Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
#define USE_AZ7798                               // Add support for AZ-Instrument 7798 CO2 datalogger (+1k6 code)
#define USE_PN532_HSU                            // Add support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
 #define USE_PN532_CAUSE_EVENTS                 // Cause event execution for PN532_UID= and PN532_DATA=[if defined] (+ 30 bytes code)
  #define USE_PN532_DATA_FUNCTION                // Add sensor40 command support for erase, setting data block content (+1k7 code, 388 bytes mem)
  #define USE_PN532_DATA_RAW                     // Allow DATA block to be used by non-alpha-numberic data (+ 80 bytes code, 48 bytes ram)
#define USE_RDM6300                              // Add support for RDM6300 125kHz RFID Reader (+0k8)
#define USE_IBEACON                              // Add support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
#define USE_HM10                                 // Add support for HM-10 as a BLE-bridge for the LYWSD03 (+5k1 code)
#define USE_HRXL                                 // Add support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)

// Power monitoring sensors -----------------------
#define USE_ENERGY_MARGIN_DETECTION              // Add support for Energy Margin detection (+1k6 code)
 #define USE_ENERGY_POWER_LIMIT                 // Add additional support for Energy Power Limit detection (+1k2 code)
#define USE_PZEM004T                             // Add support for PZEM004T Energy monitor (+2k code)
#define USE_PZEM_AC                              // Add support for PZEM014,016 Energy monitor (+1k1 code)
#define USE_PZEM_DC                              // Add support for PZEM003,017 Energy monitor (+1k1 code)
#define USE_MCP39F501                            // Add support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
#define USE_SDM120                               // Add support for Eastron SDM120-Modbus energy monitor (+1k1 code)
#define USE_SDM630                               // Add support for Eastron SDM630-Modbus energy monitor (+0k6 code)
#define USE_DDS2382                              // Add support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
#define USE_SOLAX_X1                             // Add support for Solax X1 series Modbus log info (+4k1 code)
#define USE_LE01MR                               // Add support for F&F LE-01MR modbus energy meter

// -- Low level interface devices -----------------
#define USE_DHT                                   // Disable support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor

#define USE_MAX31855                              // Disable MAX31855 K-Type thermocouple sensor using softSPI

// -- IR Remote features --------------------------
#define USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #define USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #define USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #define USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

  #define USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)
    // #define IR_RCV_BUFFER_SIZE      100          // Max number of packets allowed in capture buffer (default 100 (*2 bytes ram))
    // #define IR_RCV_TIMEOUT          15           // Number of milli-Seconds of no-more-data before we consider a message ended (default 15)
    // #define IR_RCV_MIN_UNKNOWN_SIZE 6            // Set the smallest sized "UNKNOWN" message packets we actually care about (default 6, max 255)

// -- Zigbee interface ----------------------------
//#define USE_ZIGBEE                                // Enable serial communication with Zigbee CC2530 flashed with ZNP (+49k code, +3k mem)

// ------------------------------------------------

#define USE_SR04                                 // Add support for HC-SR04 ultrasonic devices (+1k code)

#define USE_TM1638                               // Add support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
#define USE_HX711                                // Add support for HX711 load cell (+1k5 code)
  #define USE_HX711_GUI                          // Add optional web GUI to HX711 as scale (+1k8 code)

// #define USE_TX20_WIND_SENSOR                     // Add support for La Crosse TX20 anemometer (+2k6/0k8 code)
#define USE_TX23_WIND_SENSOR                     // Add support for La Crosse TX23 anemometer (+2k7/1k code)

#define USE_RC_SWITCH                            // Add support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)

#define USE_RF_SENSOR                            // Add support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)
//  #define USE_THEO_V2                            // Add support for decoding Theo V2 sensors as documented on https://sidweb.nl using 434MHz RF sensor receiver (+1k4 code)
//  #define USE_ALECTO_V2                          // Add support for decoding Alecto V2 sensors like ACH2010, WS3000 and DKW2012 using 868MHz RF sensor receiver (+1k7 code)

#define USE_HRE                                  // Add support for Badger HR-E Water Meter (+1k4 code)
#define USE_A4988_STEPPER                        // Add support for A4988 stepper-motor-driver-circuit (+10k5 code)

#define USE_TASMOTA_CLIENT                       // Add support for Arduino Uno/Pro Mini via serial interface including flashing (+2k3 code, 44 mem)

#endif  // CUSTOM_CONFIG_MEGA *****************************************************************************

#ifdef CUSTOM_CONFIG_PLATINUM // **************************************************************************
/*
ooooooooo.   ooooo              .o.       ooooooooooooo ooooo ooooo      ooo ooooo     ooo ooo        ooooo 
`888   `Y88. `888'             .888.      8'   888   `8 `888' `888b.     `8' `888'     `8' `88.       .888' 
 888   .d88'  888             .8"888.          888       888   8 `88b.    8   888       8   888b     d'888  
 888ooo88P'   888            .8' `888.         888       888   8   `88b.  8   888       8   8 Y88. .P  888  
 888          888           .88ooo8888.        888       888   8     `88b.8   888       8   8  `888'   888  
 888          888       o  .8'     `888.       888       888   8       `888   `88.    .8'   8    Y     888  
o888o        o888ooooood8 o88o     o8888o     o888o     o888o o8o        `8     `YbodP'    o8o        o888o 
###########################################################################################################*/
                                    
#undef CODE_IMAGE_STR
#define CODE_IMAGE_STR "platinum"

#define USE_DOMOTICZ                             // Enable Domoticz (+6k code, +0.3k mem)
#define USE_HOME_ASSISTANT                       // Enable Home Assistant Discovery Support (+7k code)

#define USE_KNX                                  // Enable KNX IP Protocol Support (+9.4k code, +3k7 mem)
#define USE_WEBSERVER                            // Enable web server and Wifi Manager (+66k code, +8k mem)
  #define USE_JAVASCRIPT_ES6                     // Enable ECMAScript6 syntax using less JavaScript code bytes (fails on IE11)
 #define USE_WEBSEND_RESPONSE                   // Enable command WebSend response message (+1k code)
 #define USE_EMULATION_HUE                      // Enable Hue Bridge emulation for Alexa (+18k code, +2k mem)
 #define USE_EMULATION_WEMO                     // Enable Belkin WeMo emulation for Alexa (+18k code, +2k mem)

#define USE_DISCOVERY                            // Enable mDNS for the following services (+8k code, +0.3k mem)
#define USE_TIMERS                               // Add support for up to 16 timers (+2k2 code)
  #define USE_TIMERS_WEB                         // Add timer webpage support (+4k5 code)
  #define USE_SUNRISE                            // Add support for Sunrise and sunset tools (+16k)

#define USE_RULES                                // Add support for rules (+4k4 code)
 #define USE_EXPRESSION                         // Add support for expression evaluation in rules (+3k2 code, +64 bytes mem)
   #define SUPPORT_IF_STATEMENT                 // Add support for IF statement in rules (+4k2 code, -332 bytes mem)
 #define SUPPORT_MQTT_EVENT                     // Support trigger event with MQTT subscriptions (+3k5 code)

#define ROTARY_V1                                // Add support for MI Desk Lamp
#define USE_SONOFF_RF                            // Add support for Sonoff Rf Bridge
 #define USE_RF_FLASH                           // Add support for flashing the EFM8BB1 chip on the Sonoff RF Bridge. C2CK must be connected to GPIO4, C2D to GPIO5 on the PCB (+3k code)
#define USE_SONOFF_SC                            // Add support for Sonoff Sc (+1k1 code)
#define USE_TUYA_MCU                             // Add support for Tuya Serial Dimmer
#define USE_ARMTRONIX_DIMMERS                    // Add support for Armtronix Dimmers (+1k4 code)
#define USE_PS_16_DZ                             // Add support for PS-16-DZ Dimmer and Sonoff L1 (+2k code)
#define USE_SONOFF_IFAN                          // Add support for Sonoff iFan02 and iFan03 (+2k code)
#define USE_BUZZER                               // Add support for a buzzer (+0k6 code)
#define USE_ARILUX_RF                            // Add support for Arilux RF remote controller (+1k code, 252 iram (non 2.3.0))
#define USE_SHUTTER                              // Add Shutter support for up to 4 shutter with different motortypes (+6k code)
#define USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
#define USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+2k6 code)
#define USE_HOTPLUG                              // Add support for HotPlug
#define USE_DEVICE_GROUPS                      // Add support for device groups (+4k code)
#define USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+4k5 code)
 #define USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer, also adds device groups support (+0k7 code, also includes device groups)
#define USE_KEELOQ                               // Add support for Jarolift rollers by Keeloq algorithm (+4k5 code)
#define USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer

#define USE_WS2812                               // WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
//  #define USE_WS2812_DMA                         // DMA supports only GPIO03 (= Serial RXD) (+1k mem). When USE_WS2812_DMA is enabled expect Exceptions on Pow
  #define USE_WS2812_HARDWARE  NEO_HW_WS2812     // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106)
  #define USE_WS2812_CTYPE     NEO_GRB           // WS2812 Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
#define USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1 and Ailight
#define USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
#define USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#define USE_SONOFF_L1                            // Add support for Sonoff L1 led control
#define USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller
#define USE_LIGHT_PALETTE                        // Add support for color palette (+0k7 code)

#define USE_COUNTER                              // Enable counters

#define USE_DS18x20                              // Add support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)

// -- I2C sensors ---------------------------------
#define USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)
#ifdef USE_I2C
 #define USE_SHT                                // Enable SHT1X sensor (+1k4 code)
  #define USE_HTU                                // Enable HTU21/SI7013/SI7020/SI7021 sensor (I2C address 0x40) (+1k5 code)
  #define USE_BMP                                // Enable BMP085/BMP180/BMP280/BME280 sensor (I2C address 0x76 or 0x77) (+4k code)
    #define USE_BME680                           // Enable support for BME680 sensor using Bosch BME680 library (+4k code)
  #define USE_BH1750                             // Enable BH1750 sensor (I2C address 0x23 or 0x5C) (+0k5 code)
 #define USE_VEML6070                           // Enable VEML6070 sensor (I2C addresses 0x38 and 0x39) (+0k5 code)
 #define USE_ADS1115                            // Enable ADS1115 16 bit A/D converter (I2C address 0x48, 0x49, 0x4A or 0x4B) based on Adafruit ADS1x15 library (no library needed) (+0k7 code)
 #define USE_INA219                             // Enable INA219 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+1k code)
 #define USE_INA226                             // Enable INA226 (I2C address 0x40, 0x41 0x44 or 0x45) Low voltage and current sensor (+2k3 code)
 #define USE_SHT3X                              // Enable SHT3x (I2C address 0x44 or 0x45) or SHTC3 (I2C address 0x70) sensor (+0k7 code)
//  #define USE_TSL2561                            // Enable TSL2561 sensor (I2C address 0x29, 0x39 or 0x49) using library Joba_Tsl2561 (+2k3 code)
 #define USE_TSL2591                            // Enable TSL2591 sensor (I2C address 0x29, 0x39 or 0x49) using library Adafruit_TSL2591 (+2k3 code)
//  #define USE_MGS                                // Enable Xadow and Grove Mutichannel Gas sensor using library Multichannel_Gas_Sensor (+10k code)
    // #define MGS_SENSOR_ADDR    0x04              // Default Mutichannel Gas sensor i2c address
 #define USE_SGP30                              // Enable SGP30 sensor (I2C address 0x58) (+1k1 code)
 #define USE_SI1145                             // Enable SI1145/46/47 sensor (I2C address 0x60) (+1k code)
 #define USE_LM75AD                             // Enable LM75AD sensor (I2C addresses 0x48 - 0x4F) (+0k5 code)
 #define USE_APDS9960                           // Enable APDS9960 Proximity Sensor (I2C address 0x39). Disables SHT and VEML6070 (+4k7 code)
 #define USE_MCP230xx                           // Enable MCP23008/MCP23017 for GP INPUT ONLY (I2C addresses 0x20 - 0x27) providing command Sensor29 for configuration (+2k2 code)
   #define USE_MCP230xx_ADDR 0x20               // Enable MCP23008/MCP23017 I2C Address to use (Must be within range 0x20 through 0x27 - set according to your wired setup)
   #define USE_MCP230xx_OUTPUT                  // Enable MCP23008/MCP23017 OUTPUT support through sensor29 commands (+1k code)
   #define USE_MCP230xx_DISPLAYOUTPUT           // Enable MCP23008/MCP23017 to display state of OUTPUT pins on Web UI (+0k2 code)
 #define USE_PCA9685                            // Enable PCA9685 I2C HW PWM Driver - Must define I2C Address in #define USE_PCA9685_ADDR below - range 0x40 - 0x47 (+1k4 code)
    #define USE_PCA9685_ADDR 0x40                // Enable PCA9685 I2C Address to use (Must be within range 0x40 through 0x47 - set according to your wired setup)
   #define USE_PCA9685_FREQ 50                  // Define default PWM frequency in Hz to be used (must be within 24 to 1526) - If other value is used, it will rever to 50Hz
 #define USE_MPR121                             // Enable MPR121 controller (I2C addresses 0x5A, 0x5B, 0x5C and 0x5D) in input mode for touch buttons (+1k3 code)
 #define USE_CCS811                             // Enable CCS811 sensor (I2C address 0x5A) (+2k2 code)
 #define USE_MPU6050                            // Enable MPU6050 sensor (I2C address 0x68 AD0 low or 0x69 AD0 high) (+2k6 code)
 #define USE_DS3231                             // Enable DS3231 external RTC in case no Wifi is avaliable. See docs in the source file (+1k2 code)
   #define USE_RTC_ADDR  0x68                   // Default I2C address 0x68
 // #define USE_MGC3130                            // Enable MGC3130 Electric Field Effect Sensor (I2C address 0x42) (+2k7 code, 0k3 mem)
 #define USE_MAX44009                           // Enable MAX44009 Ambient Light sensor (I2C addresses 0x4A and 0x4B) (+0k8 code)
 #define USE_SCD30                              // Enable Sensiron SCd30 CO2 sensor (I2C address 0x61) (+3k3 code)
 #define USE_SPS30                              // Enable Sensiron SPS30 particle sensor (I2C address 0x69) (+1.7 code)
  #define USE_ADE7953                            // Enable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
 #define USE_VL53L0X                            // Enable VL53L0x time of flight sensor (I2C address 0x29) (+4k code)
 #define USE_MLX90614                           // Enable MLX90614 ir temp sensor (I2C address 0x5a) (+0.6k code)
//  #define USE_CHIRP                              // Enable CHIRP soil moisture sensor (variable I2C address, default 0x20)
 #define USE_PAJ7620                            // Enable PAJ7620 gesture sensor (I2C address 0x73) (+2.5k code)
 #define USE_PCF8574                            // Enable PCF8574 I/O Expander (I2C addresses 0x20 - 0x27 and 0x38 - 0x3F) (+1k9 code)
 #define USE_HIH6                               // Enable Honeywell HIH Humidity and Temperature sensor (I2C address 0x27) (+0k6)
 #define USE_DHT12                              // [I2cDriver41] Enable DHT12 humidity and temperature sensor (I2C address 0x5C) (+0k7 code)
 #define USE_DS1624                             // [I2cDriver42] Enable DS1624, DS1621 temperature sensor (I2C addresses 0x48 - 0x4F)
 #define USE_AHT1x                              // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38) (+0k8 code)
 #define USE_WEMOS_MOTOR_V1                     // [I2cDriver44] Enable Wemos motor driver V1 ()
 #define USE_HDC1080                            // [I2cDriver45] Enable HDC1080 temperature/humidity sensor (I2C address 0x40) (+1k5 code)
 #define USE_IAQ                                // [I2cDriver46] Enable iAQ-core air quality sensor (I2C address 0x5a) (+0k6 code)
 #define USE_AS3935                              // [I2cDriver48] Enable AS3935 Franklin Lightning Sensor (I2C address 0x03) (+5k4 code)

 #define USE_DISPLAY                            // Add I2C Display Support (+2k code)
    #define USE_DISPLAY_MODES1TO5                // Enable display mode 1 to 5 in addition to mode 0
    #define USE_DISPLAY_LCD                      // [DisplayModel 1] [I2cDriver3] Enable Lcd display (I2C addresses 0x27 and 0x3F) (+6k code)
    #define USE_DISPLAY_SSD1306                  // [DisplayModel 2] [I2cDriver4] Enable SSD1306 Oled 128x64 display (I2C addresses 0x3C and 0x3D) (+16k code)
    #define USE_DISPLAY_MATRIX                   // [DisplayModel 3] [I2cDriver5] Enable 8x8 Matrix display (I2C adresseses see below) (+11k code)
      #define MTX_ADDRESS1     0x71              // [DisplayAddress1] I2C address of first 8x8 matrix module
      #define MTX_ADDRESS2     0x74              // [DisplayAddress2] I2C address of second 8x8 matrix module
      #define MTX_ADDRESS3     0x75              // [DisplayAddress3] I2C address of third 8x8 matrix module
      #define MTX_ADDRESS4     0x72              // [DisplayAddress4] I2C address of fourth 8x8 matrix module
      #define MTX_ADDRESS5     0x73              // [DisplayAddress5] I2C address of fifth 8x8 matrix module
      #define MTX_ADDRESS6     0x76              // [DisplayAddress6] I2C address of sixth 8x8 matrix module
      #define MTX_ADDRESS7     0x00              // [DisplayAddress7] I2C address of seventh 8x8 matrix module
      #define MTX_ADDRESS8     0x00              // [DisplayAddress8] I2C address of eigth 8x8 matrix module
    #define USE_DISPLAY_SEVENSEG                 // [DisplayModel 11] [I2cDriver47] Enable sevenseg display (I2C 0x70-0x77) (<+11k code)
      #define SEVENSEG_ADDRESS1     0x70         // [DisplayAddress1] I2C address of first sevenseg matrix module
   #define USE_DISPLAY_SH1106                   // [DisplayModel 7] [I2cDriver6] Enable SH1106 Oled 128x64 display (I2C addresses 0x3C and 0x3D)

#endif   // USE_I2C

// -- SPI sensors ---------------------------------
// #define USE_SPI                                  // Hardware SPI using GPIO12(MISO), GPIO13(MOSI) and GPIO14(CLK) in addition to two user selectable GPIOs(CS and DC)
#ifdef USE_SPI
//  #define USE_NRF24                              // Add SPI support for NRF24L01(+) (+2k6 code)
  #ifdef USE_NRF24
    // #define USE_MIBLE                            // BLE-bridge for some Mijia-BLE-sensors (+4k7 code)
  #else
    #ifndef USE_DISPLAY
      #define USE_DISPLAY                        // Add SPI Display support for 320x240 and 480x320 TFT
    #endif
      #define USE_DISPLAY_ILI9341                // [DisplayModel 4] Enable ILI9341 Tft 480x320 display (+19k code)
      #define USE_DISPLAY_EPAPER_29              // [DisplayModel 5] Enable e-paper 2.9 inch display (+19k code)
      #define USE_DISPLAY_EPAPER_42              // [DisplayModel 6] Enable e-paper 4.2 inch display
      #define USE_DISPLAY_ILI9488                // [DisplayModel 8] [I2cDriver38] (Touch)
      #define USE_DISPLAY_SSD1351                // [DisplayModel 9]
      // #define USE_DISPLAY_RA8876                 // [DisplayModel 10] [I2cDriver39] (Touch)
  #endif  // USE_NRF24
#endif  // USE_SPI

// -- Serial sensors ------------------------------
#define USE_MHZ19                                // Add support for MH-Z19 CO2 sensor (+2k code)
#define USE_SENSEAIR                             // Add support for SenseAir K30, K70 and S8 CO2 sensor (+2k3 code)
#define USE_PMS5003                              // Add support for PMS5003 and PMS7003 particle concentration sensor (+1k3 code)
#define USE_NOVA_SDS                             // Add support for SDS011 and SDS021 particle concentration sensor (+0k7 code)
#define USE_HPMA                                 // Add support for Honeywell HPMA115S0 particle concentration sensor (+1k4)
#define USE_SERIAL_BRIDGE                        // Add support for software Serial Bridge (+1k1 code)
#define USE_MP3_PLAYER                           // Use of the DFPlayer Mini MP3 Player RB-DFR-562 commands: play, volume and stop
#define USE_AZ7798                               // Add support for AZ-Instrument 7798 CO2 datalogger (+1k6 code)
#define USE_PN532_HSU                            // Add support for PN532 using HSU (Serial) interface (+1k8 code, 140 bytes mem)
 #define USE_PN532_CAUSE_EVENTS                 // Cause event execution for PN532_UID= and PN532_DATA=[if defined] (+ 30 bytes code)
  #define USE_PN532_DATA_FUNCTION                // Add sensor40 command support for erase, setting data block content (+1k7 code, 388 bytes mem)
  #define USE_PN532_DATA_RAW                     // Allow DATA block to be used by non-alpha-numberic data (+ 80 bytes code, 48 bytes ram)
#define USE_RDM6300                              // Add support for RDM6300 125kHz RFID Reader (+0k8)
#define USE_IBEACON                              // Add support for bluetooth LE passive scan of ibeacon devices (uses HM17 module)
#define USE_HM10                                 // Add support for HM-10 as a BLE-bridge for the LYWSD03 (+5k1 code)
#define USE_HRXL                                 // Add support for MaxBotix HRXL-MaxSonar ultrasonic range finders (+0k7)

// Power monitoring sensors -----------------------
#define USE_ENERGY_MARGIN_DETECTION              // Add support for Energy Margin detection (+1k6 code)
 #define USE_ENERGY_POWER_LIMIT                 // Add additional support for Energy Power Limit detection (+1k2 code)
#define USE_PZEM004T                             // Add support for PZEM004T Energy monitor (+2k code)
#define USE_PZEM_AC                              // Add support for PZEM014,016 Energy monitor (+1k1 code)
#define USE_PZEM_DC                              // Add support for PZEM003,017 Energy monitor (+1k1 code)
#define USE_MCP39F501                            // Add support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
#define USE_SDM120                               // Add support for Eastron SDM120-Modbus energy monitor (+1k1 code)
#define USE_SDM630                               // Add support for Eastron SDM630-Modbus energy monitor (+0k6 code)
#define USE_DDS2382                              // Add support for Hiking DDS2382 Modbus energy monitor (+0k6 code)
#define USE_SOLAX_X1                             // Add support for Solax X1 series Modbus log info (+4k1 code)
#define USE_LE01MR                               // Add support for F&F LE-01MR modbus energy meter

// -- Low level interface devices -----------------
#define USE_DHT                                   // Disable support for DHT11, AM2301 (DHT21, DHT22, AM2302, AM2321) and SI7021 Temperature and Humidity sensor

#define USE_MAX31855                              // Disable MAX31855 K-Type thermocouple sensor using softSPI

// -- IR Remote features --------------------------
// IR Full enabled in Platformio_override.ini
#define USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #define USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #define USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #define USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

  #define USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)
    // #define IR_RCV_BUFFER_SIZE      100          // Max number of packets allowed in capture buffer (default 100 (*2 bytes ram))
    // #define IR_RCV_TIMEOUT          15           // Number of milli-Seconds of no-more-data before we consider a message ended (default 15)
    // #define IR_RCV_MIN_UNKNOWN_SIZE 6            // Set the smallest sized "UNKNOWN" message packets we actually care about (default 6, max 255)

#define USE_SR04                                 // Add support for HC-SR04 ultrasonic devices (+1k code)

#define USE_TM1638                               // Add support for TM1638 switches copying Switch1 .. Switch8 (+1k code)
#define USE_HX711                                // Add support for HX711 load cell (+1k5 code)
  #define USE_HX711_GUI                          // Add optional web GUI to HX711 as scale (+1k8 code)

// #define USE_TX20_WIND_SENSOR                     // Add support for La Crosse TX20 anemometer (+2k6/0k8 code)
// #define USE_TX23_WIND_SENSOR                     // Add support for La Crosse TX23 anemometer (+2k7/1k code)

#define USE_RC_SWITCH                            // Add support for RF transceiver using library RcSwitch (+2k7 code, 460 iram)

#define USE_RF_SENSOR                            // Add support for RF sensor receiver (434MHz or 868MHz) (+0k8 code)

#define USE_HRE                                  // Add support for Badger HR-E Water Meter (+1k4 code)
#define USE_A4988_STEPPER                        // Add support for A4988 stepper-motor-driver-circuit (+10k5 code)

#define USE_TASMOTA_CLIENT                       // Add support for Arduino Uno/Pro Mini via serial interface including flashing (+2k3 code, 44 mem)

#define USE_THERMOSTAT                           // Add support for the new driver created for thermostat control. #8212
#define USE_PING                                 // Add support for the PING command. #7176

#endif  // CUSTOM_CONFIG_PLATINUM *******************************************************************

/*********************************************************************************************\
 * Debug features
\*********************************************************************************************/

//#define PROFILE_XSNS_EVERY_SECOND                // Profile XsnsCall function EVERY_SECOND debug info
//#define PROFILE_XSNS_SENSOR_EVERY_SECOND         // Profile XsnsCall function EVERY_SECOND for single sensor debug info

//#define DEBUG_TASMOTA_CORE                       // Enable core debug messages
//#define DEBUG_TASMOTA_DRIVER                     // Enable driver debug messages
//#define DEBUG_TASMOTA_SENSOR                     // Enable sensor debug messages
//#define DEBUG_TASMOTA_TRACE                      // Enable trace debug messages

//#define DEBUG_THEO                               // Add debug code and add xdrv_99_debug.ino providing Exception test and RTCDump
//#define USE_DEBUG_DRIVER                         // Use xdrv_99_debug.ino providing commands CpuChk, CfgXor, CfgDump, CfgPeek and CfgPoke

#endif  // _USER_CONFIG_OVERRIDE_H_
