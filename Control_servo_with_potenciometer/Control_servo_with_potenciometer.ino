#include<Servo.h>

Servo myServo;

int potPin=0;
int val;


void setup() {
  Serial.begin(9600);
  myServo.attach(9);
}

void loop() {
 val = analogRead(potPin);
  val = map(val,0,680,0,180);
  myServo.write(val);
  Serial.println(val);
  delay(0);
}
