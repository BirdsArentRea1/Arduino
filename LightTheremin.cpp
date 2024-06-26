int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;
const int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  while (millis() < 5000) {
    sensorValue = analog(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  }
digitalWrite(led, LOW); 
}
void loop() {
  sensorValue = analogRead(AO);
  int pitch = map(sensorValue,sensorLow,sensorHigh, 50, 4000);
  tone(8,pitch,20);
  delay(10);
}
