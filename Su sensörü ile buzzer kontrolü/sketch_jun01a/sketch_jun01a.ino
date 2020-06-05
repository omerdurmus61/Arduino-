/*
 * Bağlantılar 
 * su sensörünün + ve - bağlantısı yapılır.
 * A0 pinine su sensörünün s pini bilgi bacağı bağlanır.
 * buzzer'in + ucuna bir direnç ile 8 pin bağlanır ve - bağlantısı yapılır.
 * arduino'yu besleyecek olacn bağlantılar yapılır.
 */
 
 
 
 #define suSensoru A0
#define buzzer 8
#define esikDeger 100
int veri;



void setup() {
  pinMode(buzzer,OUTPUT);
  
}

void loop() {

  veri=analogRead(suSensoru);
  if(veri>esikDeger)
  {
    digitalWrite(buzzer,HIGH);
    
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }
    
}
