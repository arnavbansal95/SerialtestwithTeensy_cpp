int led = 13;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char ch = char(Serial.read());
    if(ch > 0)
    {
      Serial.print(ch);
    }  
  }
}
