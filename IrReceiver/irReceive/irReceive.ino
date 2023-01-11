#include <IRremote.h>  
 
const int irReceiverPin = 2;  
const int ledPin = 10;
 
IRrecv irrecv(irReceiverPin); 
decode_results results;    
 
void setup()
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);   
  irrecv.enableIRIn();   
}
 
void loop() 
{
  if (irrecv.decode(&results)) {   
    Serial.print("irCode: ");            
    Serial.print(results.value, HEX); 
    Serial.print(",  bits: ");           
    Serial.println(results.bits); 
    irrecv.resume();    
  }  
  delay(600); 
  if(results.value == 0x449E79F) // For Epson Projector Remote  - C1AA09F6
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}

