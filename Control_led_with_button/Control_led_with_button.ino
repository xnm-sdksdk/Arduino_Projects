//Turns on and off a LED ,when pressings button attach to pin12
/**********************************/
const int keyPin = 2; //the number of the key pin
const int ledPin8 = 8;
const int ledPin7 = 7;
const int ledPin6 = 6;
const int ledPin5 = 5;
const int ledPin4 = 4;
const int ledPin3 = 3;//the number of the led pin
/**********************************/
void setup()
{
  pinMode(keyPin,INPUT);//initialize the key pin as input
  pinMode(ledPin8,OUTPUT);//initialize the led pin as output
  pinMode(ledPin7,OUTPUT);
  pinMode(ledPin6,OUTPUT);
  pinMode(ledPin5,OUTPUT);
  pinMode(ledPin4,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  
}
/**********************************/
void loop()
{
  //read the state of the key value
  //and check if the kye is pressed
  //if it is,the state is HIGH
  if(digitalRead(keyPin) == HIGH )
  {
    digitalWrite(ledPin8,HIGH);//turn on the led
  }
  if(digitalRead(keyPin) == LOW )
  {
    digitalWrite(ledPin8,LOW);//turn off the led
  }
  
  // 7
  if(digitalRead(keyPin) == HIGH )
  {
    digitalWrite(ledPin7,HIGH);//turn on the led
  }
  if(digitalRead(keyPin) == LOW )
  {
    digitalWrite(ledPin7,LOW);//turn off the led
  } 
  
  // 6
  
   if(digitalRead(keyPin) == HIGH )
  {
    digitalWrite(ledPin6,HIGH);//turn on the led
  }
  if(digitalRead(keyPin) == LOW )
  {
    digitalWrite(ledPin6,LOW);//turn off the led
  }
  
  // 5
  
   if(digitalRead(keyPin) == HIGH )
  {
    digitalWrite(ledPin5,HIGH);//turn on the led
  }
  if(digitalRead(keyPin) == LOW )
  {
    digitalWrite(ledPin5,LOW);//turn off the led
  }
  
   if(digitalRead(keyPin) == HIGH )
  {
    digitalWrite(ledPin4,HIGH);//turn on the led
  }
  if(digitalRead(keyPin) == LOW )
  {
    digitalWrite(ledPin4,LOW);//turn off the led
  }
  
  
   if(digitalRead(keyPin) == HIGH )
  {
    digitalWrite(ledPin3,HIGH);//turn on the led
  }
  if(digitalRead(keyPin) == LOW )
  {
    digitalWrite(ledPin3,LOW);//turn off the led
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
}
