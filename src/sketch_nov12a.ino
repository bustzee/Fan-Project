const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int reading = analogRead(sensorPin);

  float voltage = reading * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0;

  Serial.print("Raw: ");
  Serial.print(reading);

  Serial.print(" | Voltage: ");
  Serial.print(voltage, 3);

  Serial.print(" | Temperature: ");
  Serial.println(temperatureC, 2);

  delay(1000);
}