void setup() {
  int ledpin =9;
  int analogpin = 0;
}

void loop() {
  for (int i=0 ; i<=255 ; i++)
{ 
  analogWrite( ledpin , i);
  delay(delayval());
  
}
 for (int i=225 ; i>0 ; i--)
{ 
  analogWrite( ledpin , i);
  delay(delayval());
  
}
int delayval()
{
  int v ;
  v = analogRead (analogpin);
  v /= 8;
  return v;
  
}
}
