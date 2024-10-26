void setup()
{
pinMode(9,OUTPUT); //red led
pinMode(10,OUTPUT); //green led
pinMode(11,OUTPUT); //blue led
}
void loop()
{
analogWrite (9,255);
analogWrite (10,0);
analogWrite (11,0);
delay(1000);
//Setting 9 to 255 will make it glow red color

//analogWrite (9,255);
//analogWrite (10,255);
//analogWrite (11,255);
//delay (1000);
//Setting red,green & blue to 255 will light up as white

//analogWrite (9,255);
//analogWrite (10,0);
//analogWrite (11,255);
//delay (1000);
//Setting red & blue to 255 will make it glow purple

//analogWrite (9,255);
//analogWrite (10,0);
//analogWrite (11,255);
//delay (1000);
//Purple color
}
