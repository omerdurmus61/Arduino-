#include <Servo.h>

const byte pot = A0;
int potDeger;
Servo sg90;


int i ;

void setup() {
  sg90.attach(9);
  Serial.begin(9600);

}

void loop() {

  potDeger=analogRead(pot);
  
  int deger= map(potDeger,0,1023,0,180);

  sg90.write(deger);

  Serial.print("Acı degeri=");
  Serial.println(deger);
  delay(15); 
   

  
}
