#include <Servo.h> // Servo library
/************************************************/
Servo myservo;//create servo object to control a servo
/************************************************/
void setup()
{
  myservo.attach(9);//attachs the servo on pin 9 to servo object
  myservo.write(0);//back to 0 degrees 
  delay(1000);//wait for a second
}

int pos = 0;

void loop()
{ 

  for (pos = 0; pos <= 180; pos+=1) {
    myservo.write(pos);//goes to 15 degrees 
    delay(15);//wait for a second

  }

  for (pos = 180; pos >= 0; pos -=1) {
    myservo.write(pos);
    delay(15);
  }
}
