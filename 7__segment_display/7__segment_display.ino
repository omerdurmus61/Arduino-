#define g 2
#define f 3
#define a 4
#define b 5
#define e 6
#define d 7
#define c 8
#define basamakNoktasi 9

void rakamYazdirma(int rakam);



void setup() {

  for(int i=2;i<=9;i++)
  {
    pinMode(i,OUTPUT);
  }



}

void loop() {

  for(int i=0;i<=10;i++)
  {
    rakamYazdirma(i);
    delay(500);
  }

}

void rakamYazdirma(int rakam)
{

  switch(rakam)
  {
    case 0: 
            digitalWrite(a,HIGH);
            digitalWrite(f,HIGH);
            digitalWrite(b,HIGH);
            digitalWrite(e,HIGH);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(g,LOW);

            break;

    case 1: 

            digitalWrite(a,LOW);
            digitalWrite(f,LOW);
            digitalWrite(b,HIGH);
            digitalWrite(e,LOW);
            digitalWrite(c,HIGH);
            digitalWrite(d,LOW);
            digitalWrite(g,LOW);


        break;


        case 2: 

            digitalWrite(a,HIGH);
            digitalWrite(f,LOW);
            digitalWrite(b,HIGH);
            digitalWrite(e,HIGH);
            digitalWrite(c,LOW);
            digitalWrite(d,HIGH);
            digitalWrite(g,HIGH);

            break;

         case 3:

            digitalWrite(a,HIGH);
            digitalWrite(f,LOW);
            digitalWrite(b,HIGH);
            digitalWrite(e,LOW);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(g,HIGH);

            break;


          case 4:

            digitalWrite(a,LOW);
            digitalWrite(f,HIGH);
            digitalWrite(b,HIGH);
            digitalWrite(e,LOW);
            digitalWrite(c,HIGH);
            digitalWrite(d,LOW);
            digitalWrite(g,HIGH);

            break;

           case 5:

            digitalWrite(a,HIGH);
            digitalWrite(f,HIGH);
            digitalWrite(b,LOW);
            digitalWrite(e,LOW);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(g,HIGH);

            break;

          case 6:

             digitalWrite(a,HIGH);
            digitalWrite(f,HIGH);
            digitalWrite(b,LOW);
            digitalWrite(e,HIGH);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(g,HIGH);

            break;

            case 7:

              digitalWrite(a,HIGH);
            digitalWrite(f,LOW);
            digitalWrite(b,HIGH);
            digitalWrite(e,LOW);
            digitalWrite(c,HIGH);
            digitalWrite(d,LOW);
            digitalWrite(g,LOW);

            break;


            case 8:

            digitalWrite(a,HIGH);
            digitalWrite(f,HIGH);
            digitalWrite(b,HIGH);
            digitalWrite(e,HIGH);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(g,HIGH);

            break;

            case 9:

            digitalWrite(a,HIGH);
            digitalWrite(f,HIGH);
            digitalWrite(b,HIGH);
            digitalWrite(e,LOW);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(g,HIGH);

            break;

            case 10:

            digitalWrite(a,HIGH);
            digitalWrite(f,HIGH);
            digitalWrite(b,HIGH);
            digitalWrite(e,HIGH);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(g,HIGH);
            digitalWrite(basamakNoktasi,HIGH);

            delay(100);
            
            digitalWrite(a,LOW);
            digitalWrite(f,LOW);
            digitalWrite(b,LOW);
            digitalWrite(e,LOW);
            digitalWrite(c,LOW);
            digitalWrite(d,LOW);
            digitalWrite(g,LOW);
            digitalWrite(basamakNoktasi,LOW);

            delay(100);

             digitalWrite(a,HIGH);
            digitalWrite(f,HIGH);
            digitalWrite(b,HIGH);
            digitalWrite(e,HIGH);
            digitalWrite(c,HIGH);
            digitalWrite(d,HIGH);
            digitalWrite(g,HIGH);
            digitalWrite(basamakNoktasi,HIGH);

            delay(100);
            
            digitalWrite(a,LOW);
            digitalWrite(f,LOW);
            digitalWrite(b,LOW);
            digitalWrite(e,LOW);
            digitalWrite(c,LOW);
            digitalWrite(d,LOW);
            digitalWrite(g,LOW);
            digitalWrite(basamakNoktasi,LOW);

            break;

    
  }
  
}
