// LM35 Reading
// Copyright (c) 2022-2024 Ercan Ersoy
// All rights reserved.


#define ANALOG_INPUT_PIN A0


void setup() {
  Serial.begin(2400);
}


void loop() {
  int raw_value = analogRead(ANALOG_INPUT_PIN);

  float temperature = raw_value * 0.488758;

  Serial.println(temperature, 2);

  delay(1000);
}
