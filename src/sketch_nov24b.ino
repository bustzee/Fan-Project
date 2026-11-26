int motorPin = 9;
const int sensorPin = A0;

void setup() {
    pinMode(motorPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int reading = analogRead(sensorPin);

    float voltage = reading * (5.0 / 1023.0);
    float temperatureC = (voltage - 0.5) * 100.0;

    Serial.print("Temperature: ");
    Serial.println(temperatureC);
    //convert readings to temperature
    if (temperatureC > 30) {
        digitalWrite(motorPin, HIGH);
        Serial.println("ON");
        //turn on
    } else {
        digitalWrite(motorPin, LOW);
        Serial.println("OFF");
        //turn off
    }

    //delay(500);
}