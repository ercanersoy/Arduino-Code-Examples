// DS18B20 Reading
// Copyright (c) 2022-2024 Ercan Ersoy
// All rights reserved.

// Required libraries: OneWire, DallasTempature


#include <OneWire.h>
#include <DallasTemperature.h>


#define DS18B20_BUS_PIN 2


OneWire oneWire(DS18B20_BUS_PIN);

DallasTemperature ds18b20_sensors(&oneWire);


void setup() {
  Serial.begin(2400);

  ds18b20_sensors.begin();
}


void loop() {
  ds18b20_sensors.requestTemperatures();

  Serial.println(ds18b20_sensors.getTempCByIndex(0));

  delay(1000);
}
