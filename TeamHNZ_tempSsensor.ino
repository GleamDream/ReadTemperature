#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 10
#define SENSOR_BIT 12

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sensors.setResolution(SENSOR_BIT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensors.requestTemperatures();
  Serial.println(sensors.getTempCByIndex(0));
}
