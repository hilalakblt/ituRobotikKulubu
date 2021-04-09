void setup()
{
  Serial.begin(9600);
  
  for(int i=2; i<=6; i++){
  	pinMode(i, OUTPUT);
    
  }
}

void loop()
{   
  int okunanDeger;
  
  for(int i=2; i<=6; i++){
    
    okunanDeger = analogRead(A0);
    okunanDeger = map(okunanDeger,0,1023,0,500);
    
  	digitalWrite(i, HIGH);
    delay(okunanDeger);
    digitalWrite(i, LOW);
    delay(okunanDeger);
  } 
  
  for(int i=6; i>=2;--i){
    
    okunanDeger = analogRead(A0);
    okunanDeger = map(okunanDeger,0,1023,0,500);
    
    digitalWrite(i, HIGH);
    delay(okunanDeger);
    digitalWrite(i, LOW);
    delay(okunanDeger);
  }
  Serial.println(okunanDeger);
  
}