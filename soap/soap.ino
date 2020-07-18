#include <Servo.h>

Servo myservo;
int sensor = 6;
void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
  myservo.attach(5);
  myservo.write(0);

}

void loop() {
  int valueSensor =  digitalRead(6);
  Serial.println(valueSensor);

  if (valueSensor == 0) {
    myservo.write(90);
    delay(500);
    myservo.write(0);
  }

}
