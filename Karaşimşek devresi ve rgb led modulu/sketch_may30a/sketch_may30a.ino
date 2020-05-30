//#define komutu ile program sabitlerini atayalım.
#define led1 8
#define led2 9
#define led3 10
#define led4 11
#define rgb_r 2
#define rgb_g 3
#define rgb_b 4

//programda kullanılacak olan giriş çıkış pinlerini tanımlayalım.
void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(rgb_r,OUTPUT);
pinMode(rgb_g,OUTPUT);
pinMode(rgb_b,OUTPUT);

}
//pinleri uzun bir şekilde teker teker kontrol edebiliriz.
void loop() {
/*
digitalWrite(led1,HIGH);
delay(500);
digitalWrite(led1,LOW);
delay(500);

digitalWrite(led2,HIGH);
delay(500);
digitalWrite(led2,LOW);
delay(500);

digitalWrite(led3,HIGH);
delay(500);
digitalWrite(led3,LOW);
delay(500);

digitalWrite(led4,HIGH);
delay(500);
digitalWrite(led4,LOW);
delay(500);
*/
//for döngüsü ile her seferinde tanımlanan değişkeni bir arttırarak bu işlemi yapabiliriz.
for(int i=8;i<12;i++)
{
  digitalWrite(i,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  delay(500);
}


for(int i=11;i>7;i--)
{
  digitalWrite(i,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  delay(500);
}


digitalWrite(rgb_r,HIGH);
delay(250);
digitalWrite(rgb_r,LOW);
delay(250);

digitalWrite(rgb_b,HIGH);
delay(250);
digitalWrite(rgb_b,LOW);
delay(250);

digitalWrite(rgb_g,HIGH);
delay(250);
digitalWrite(rgb_g,LOW);
delay(250);
  
}
