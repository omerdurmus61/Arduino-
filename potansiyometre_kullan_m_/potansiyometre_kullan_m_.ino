#define analogPin A0

float gerilim;
int potansiyoMetreDegeri;


void setup() {

  pinMode(analogPin,INPUT);
  Serial.begin(9600);

}

void loop() {

  potansiyoMetreDegeri = analogRead(analogPin);

  gerilim = potansiyoMetreDegeri/(float)1023*5;

  Serial.print("Potansiyometre'den okunan deger = ");
  
  Serial.println(potansiyoMetreDegeri);
  
  Serial.print("Gerilim degeri = " );
  
  Serial.println(gerilim );

  delay(1000);
 
  
  
}
