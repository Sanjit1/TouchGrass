#include <Wire.h>
#include "Adafruit_VEML6070.h"
#include "Adafruit_Si7021.h"

Adafruit_VEML6070 uv = Adafruit_VEML6070();

void setup() {
  Serial.begin(9600);
  Serial.println("VEML6070 Test");
  uv.begin(VEML6070_1_T);  // pass in the integration time constant

  if (!sensor.begin()) {
    Serial.println("Did not find Si7021");
  }
}


void loop() {
  Serial.print("UV light level: "); Serial.println(uv.readUV());
  
  delay(1000);
}