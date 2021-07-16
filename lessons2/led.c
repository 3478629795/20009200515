// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  Serial.println("i'm ok!");
}

int i=13;
void loop()
{
  for(i=13;i>5;i--)
  {
    Serial.println(i,DEC);
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
}
