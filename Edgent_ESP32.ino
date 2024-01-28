#define BLYNK_TEMPLATE_ID "TMPL3Af9ewYw_"
#define BLYNK_TEMPLATE_NAME "Servo Motor Control"

#define BLYNK_FIRMWARE_VERSION "0.14.4"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_ESP32_DEV_MODULE
//#define USE_ESP32S2_DEV_KIT

#include "BlynkEdgent.h"
#include <ESP32_Servo.h> 
Servo servo1, servo2, servo3, servo4, servo5, servo6;

void setup()
{
  Serial.begin(115200);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
BLYNK_WRITE(V0)
{
  int s0 = param.asInt(); 
  servo1.write(s0);
  Blynk.virtualWrite(V5, s0);
}
BLYNK_WRITE(V1)
{
  int s1 = param.asInt(); 
  servo2.write(s1);
  Blynk.virtualWrite(V6, s1);
}
BLYNK_WRITE(V2)
{
  int s2 = param.asInt(); 
  servo3.write(s2);
  Blynk.virtualWrite(V7, s2);
}
BLYNK_WRITE(V3)
{
  int s3 = param.asInt(); 
  servo4.write(s3);
  Blynk.virtualWrite(V8, s3);
}
BLYNK_WRITE(V4)
{
  int s4 = param.asInt(); 
  servo5.write(s4);
  Blynk.virtualWrite(V9, s4);
}
BLYNK_WRITE(V5)
{
  int s5 = param.asInt(); 
  servo5.write(s5);
  Blynk.virtualWrite(V10, s5);
}




