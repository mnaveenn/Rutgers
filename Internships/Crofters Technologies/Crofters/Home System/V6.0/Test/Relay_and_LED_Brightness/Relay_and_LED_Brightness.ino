int relay1 = D2;
int relay2 = D3;
int relay3 = D4;
int led  = D7;
int led1  = D1;
void setup() 
{
  pinMode(led,     OUTPUT);
  pinMode(led1,    OUTPUT);
  pinMode(relay1,  OUTPUT);
  pinMode(relay2,  OUTPUT);
  pinMode(relay3,  OUTPUT);
}

void loop() 
{
  analogWrite(led,0);
  analogWrite(led1,0);
  digitalWrite(relay3,  LOW);    
  //digitalWrite(relay1,  HIGH);    
  delay(2000); 
  analogWrite(led,512);
  analogWrite(led1,512);             
  //digitalWrite(relay1,  LOW);    
  //digitalWrite(relay2,  HIGH);    
  delay(2000);
  analogWrite(led,1023);
  analogWrite(led1,1023);              
  //digitalWrite(relay2,  LOW);    
  digitalWrite(relay3,  HIGH);    
  delay(2000);               
}
