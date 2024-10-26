/*  Interfacing and controlling direction of Servo Motor*/


#include <Servo.h>          // Arduino library file for Servo motor;
Servo myservo;              //define object for motor;
int i;
int j;

void setup()
{
  myservo.attach(3);      //pin functionality using user object;
}

void loop()
{
  // myservo.write(180);
  // delay(2000);
  for (i = 0; i < 181; i = i + 2)
  {
    myservo.write(i);
    delay (100);
  }
  for (j = 180; j > 0; j = j - 2)
  {
    myservo.write(j);
    delay (100);
  }

}
