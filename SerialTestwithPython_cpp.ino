#include "testStruct.h"

int led = 13;
floorPos_t fpVar;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  
  fpVar.prev = 10;
  fpVar.curr = 11;
  fpVar.dest = 12;
  fpVar.dirc = 2;

}

void loop() 
{
  // put your main code here, to run repeatedly:
  /*if(Serial.available())
  {
    char ch = char(Serial.read());
    if(ch > 0)
    {
      Serial.print(ch);
    }  
  }*/
  delay(1000);
  Serial.write((byte*)&fpVar, sizeof(fpVar));

}
