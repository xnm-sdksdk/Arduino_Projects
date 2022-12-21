int pinled8 = 8;
int pinled9 = 9;
int pinled10 = 10;

void setup()

{
  pinMode(pinled8, OUTPUT);
  pinMode(pinled9, OUTPUT);
  pinMode(pinled10, OUTPUT);
}

void loop()
{
  digitalWrite(pinled8, HIGH);
  delay(1000);
  digitalWrite(pinled8, LOW);
  delay(1000);
  digitalWrite(pinled9, HIGH);
  delay(1000);
  digitalWrite(pinled9, LOW);
  delay(1000);
  digitalWrite(pinled10, HIGH);
  delay(1000);
  digitalWrite(pinled10, LOW);
  delay(1000);
}