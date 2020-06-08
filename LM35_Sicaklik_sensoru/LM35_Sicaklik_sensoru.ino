#define lm35 A0

float okunanDeger;
float sicaklik;

void setup() {
  Serial.begin(9600);
}

void loop() {
    
    okunanDeger=analogRead(lm35);

    //MiliVolt değerini volta çeviriyoruz;
    okunanDeger = (okunanDeger/1023)*5000;

    sicaklik = okunanDeger/10.0;

    Serial.println("Sıcaklik degeri");
    Serial.print(sicaklik);
    Serial.println(" derece");
    delay(1000);
    
}
