#include <Servo.h>

Servo sg90;

const byte xEkseni=A0;

int xDurum,aci;



void setup() {

  sg90.attach(9);
  Serial.begin(9600);

}

void loop() {

  xDurum=analogRead(xEkseni);

  aci=map(xDurum,0,1023,0,180);

  sg90.write(aci);

  Serial.print("Aci degeri=");
  Serial.println(aci);  
  delay(15);
 

}
