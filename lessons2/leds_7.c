// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  Serial.println("I'm OK!");
}
int i=0;
int T=1000;
void loop()
{
  if(Serial.available()>0)
  {
    i=Serial.read();
    i=i-'0';
    switch(i)
    {
      case 1:
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          delay(T);
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          break;
      case 2:
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(8,HIGH);
          delay(T);
          digitalWrite(2,LOW);
          digitalWrite(3,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(8,LOW);
          break;
      case 3:
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(8,HIGH);
          delay(T);
          digitalWrite(2,LOW);
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(8,LOW);
          break;
      case 4:
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          digitalWrite(8,HIGH);
          delay(T);
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          break;
      case 5:
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          digitalWrite(8,HIGH);
          delay(T);
          digitalWrite(2,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          break;
      case 6:
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          digitalWrite(8,HIGH);
          delay(T);
          digitalWrite(2,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          break;
      case 7:
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          delay(T);
          digitalWrite(2,LOW);
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          break;
      case 8:
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          digitalWrite(8,HIGH);
          delay(T);
          digitalWrite(2,LOW);
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          break;
      case 9:
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          digitalWrite(8,HIGH);
          delay(T);
          digitalWrite(2,LOW);
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(7,LOW);
          digitalWrite(8,LOW);
          break;
      case 0:
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          delay(T);
          digitalWrite(2,LOW);
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          digitalWrite(5,LOW);
          digitalWrite(6,LOW);
          digitalWrite(7,LOW);
          break;
    }
    
  }
}
  
