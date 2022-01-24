/**
 * Test serial output.
 */
#include <Arduino.h>

// const uint8_t LED_PIN = LED_BUILTIN;
const uint16_t DELAY = 2000;

void setup() {
    // serial monitor @ 9600 baud
    Serial.begin(9600);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Serial.println("ON");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DELAY);
  Serial.println("OFF");
  digitalWrite(LED_BUILTIN, LOW);
  delay(DELAY);
} // loop()
