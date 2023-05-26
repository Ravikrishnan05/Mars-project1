// C++ code
//basic program to connect and use 2 sensors 
#define pot A0
#define button 6
void setup()
{
  pinMode(pot, INPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
  
}
void loop()
{
  bool bdata ;  //
  int pdata = 0;
  bdata=digitalRead(button);
  pdata=analogRead(pot);
  
  Serial.print("pot data:");
  Serial.print(pdata);
  Serial.print(" button data:");
  Serial.print(bdata);
  Serial.print("\n");
  
 // delay(2000);
  
  
}
