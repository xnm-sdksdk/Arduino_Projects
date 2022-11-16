int pinled8 = 8;
int pinled7 = 7;
int pinled6 = 6;
int pinled5 = 5;
int pinled4 = 4;
int pinled3 = 3;

void setup()
{
pinMode(pinled8, OUTPUT);
pinMode(pinled7, OUTPUT);
pinMode(pinled6, OUTPUT);
pinMode(pinled5, OUTPUT);
pinMode(pinled4, OUTPUT);
pinMode(pinled3, OUTPUT);
}

void loop()
{
  digitalWrite(pinled8, HIGH);
  delay(1000);
  digitalWrite(pinled8, LOW);
  delay(500);
  digitalWrite(pinled7, HIGH);
  delay(1500);
  digitalWrite(pinled7, LOW);
  delay(700);
  digitalWrite(pinled6, HIGH);
  delay(2000);
  digitalWrite(pinled6, LOW);
  delay(900);
  digitalWrite(pinled5, HIGH);
  delay(2500);
  digitalWrite(pinled5, LOW);
  delay(1100);
  digitalWrite(pinled4, HIGH);
  delay(3000);
  digitalWrite(pinled4, LOW);
  delay(1300);
  digitalWrite(pinled3, HIGH);
  delay(3500);
  digitalWrite(pinled3, LOW);
  delay(1500);
}
