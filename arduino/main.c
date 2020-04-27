// Simple demo program to send and receive data to/from android phone

void setup()  
{  
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}
  
void loop()  
{
  char c;
  
  for(int i = 0; i < 100; i++) {  
    
    
    if(Serial.available())
    {  
      c = Serial.read();  
      Serial.print(c);

      if(c == 'x')
      {
        digitalWrite(6, HIGH);
      }
      if(c == 'c')
      {
        digitalWrite(6, LOW);
      }
        
    }

    Serial.write("Running..\n");
    delay(1000);  
    
  }
}  