
#include <Servo.h>  // servo library

Servo servo1;  // servo control object

int inputPin = 7;
int ledPin = 13;
void setup()
{
 
   pinMode (inputPin, INPUT);
   pinMode (ledPin, OUTPUT);
Serial.begin(9600);
  servo1.attach(9);
 //servol.attach(10);
  //servor.attach(11);
 int position;
}


void loop()
{

 // int position;
  
//Serial.print(inputPin);
  if (digitalRead (inputPin) == HIGH )
    {
      //Serial.print('if true');
      //int position;
      digitalWrite(ledPin, HIGH);
    servo1.write(155);    // Tell servo to go to 90 degrees

    delay(2000);         // Pause to get it time to move
  
    servo1.write(50);   // Tell servo to go to 180 degrees
  
    delay(2000);    
  }
  else
  {
    //Serial.print('else');
    int i;
    for(i = 0; i < 4; i++)
    {
    servo1.write(50);
    delay(100);
    servo1.write(75);
    delay(100);
    servo1.write(50);
    delay(100);
    } q
    
    digitalWrite(ledPin, LOW);
     while( digitalRead (inputPin) == LOW )
    {}
  }
 
}


