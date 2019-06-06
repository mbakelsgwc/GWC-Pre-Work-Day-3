/*
 * Reading Analog Values
 * By Michelle Bakels
 * Read analog values using sensor
 */

int sensorPin = A2; //analog input pin
int sensorVal; //variable to store the incoming sensor values

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorVal = analogRead(sensorPin);
  Serial.println(sensorVal);
}
