const int motionSensorPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(motionSensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int motionValue = digitalRead(motionSensorPin);

  if (motionValue == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  Serial.print("Motion Sensor: ");
  Serial.print(motionValue);
  Serial.print(" - LED Status: ");
  Serial.println(digitalRead(ledPin));

  delay(100);
}