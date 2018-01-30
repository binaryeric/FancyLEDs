//---- program defs

#define FASTLED_ESP8266_RAW_PIN_ORDER

//---- headers
#include <FastLED.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
//#include <ArduinoOTA.h>

//---- constants

#define led_chipset = WS2811;
const int num_leds = 50;
const int signal_pin = D1;
#define color_order = BRG;

CRGB leds[num_leds];

byte effect_brightness = 255;

//-- networking
const char* net_SSID = "SmartDevices";
const char* password = "dickface";

//unsigned int localPort = 7777;

IPAddress ip(192,168,0,150);
IPAddress gateway(192,168,0,1);
IPAddress subnet(255,255,255,0);

//-- packet payloads:
const int buffer_max_length = 1024; //(1024 bytes)

//--
const boolean test_mode = true;
const int serial_output_port = 9600;


