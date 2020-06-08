#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11 

DHT dht(DHTPIN,DHTTYPE); 



void setup() {

  Serial.begin(9600);
  dht.begin();

}

void loop() {

   delay(2000);

   float nem = dht.readHumidity();
   float sicaklik = dht.readTemperature();

    if(isnan(nem)||isnan(sicaklik))
    {
      Serial.println("Sensor bilgilerinde hata var.");
    }

    delay(2000);
    Serial.println("Sicaklik");
    Serial.println(sicaklik);
    Serial.println("Nem");
    Serial.println(nem);
    
}
