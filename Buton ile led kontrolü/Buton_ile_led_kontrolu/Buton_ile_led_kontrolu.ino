
#define buton 8
#define led 10

void setup() {

  pinMode(buton,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
 
  if(digitalRead(buton)==1)
     digitalWrite(led,HIGH);  
  
   else 
    digitalWrite(led,LOW);
  


}
