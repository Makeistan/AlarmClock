/*
This code is published in public domain.
Any part of it or whole code can be edited/removed/modified, but reproducing and publishing it can be done only by providing proper credit to the resource (make-i-stan).

The Sketch is a simple 7-Segment-LED driver using Arduino UNO with direct addressing all LED segments of all displays at the same time (see Fritzing for detail).
Each LED display has an enable terminal, so each time only one LED dispalys and a number is shown at one display only, keeping others off.
Since it is targeted for beginners, direct addressing is avoided at each terminal like the previous version, and multiplexing logic is employed.
Additional feature of this code is to make use of displaying digits on 7-Segment-LED display. So we will add a buzzer and timing mechanism to make Alarm Clock out of it.
In this way, a number displaying circuit can be turned into clock and an alarm eventually.

Specially prepared for Arduino Nights at Make-i-stan (Pakistan's first and only Makerspace).
For more details, visit www.Make-i-stan.co or www.Facebook.com/Makeistan or www.Twitter.com/Makeistan
*/

//                                                                                           g  f  G  a  b
//                                                                                           |  |  |  |  |
const int a=2;                                                                               //////a//////
const int b=3;                                                                               //         //
//                                                                                           f           b
const int c=4;                                                                               //         //
const int d=5;                                                                               //////g//////
const int e=6;                                                                               //         //
//                                                                                           e           c
const int f=7;                                                                               //         //
const int g=8;                                                                               //////d////// (h)
//                                                                                           |  |  |  |  |
//                                                                                           e  d  G  c  h


//                                                       Follow this configuration for making connections in common cathode LED 7-segment displays
//                                                         'a' through 'g' are 7 segment display LEDs while 'h' is an LED as a point on display.
//                                                 'G' is used for provide Ground which I am using as Enable here, thus LED will lit only iff I turn G off.
//                                                       'h' don't needs to be get connected since there is no room for a point in Clock display
const int buzzer = 9;

const int Gh1 = 10;
const int Gh2 = 11;
const int Gm1 = 12;
const int Gm2 = 13;
const int Gs1 = A0;
const int Gs2 = A1;

void setup()
{
  Serial.begin(9600);
  
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  
  pinMode(buzzer,OUTPUT);
  
  pinMode(Gh1,OUTPUT);
  pinMode(Gh2,OUTPUT);
  pinMode(Gm1,OUTPUT);
  pinMode(Gm2,OUTPUT);
  pinMode(Gs1,OUTPUT);
  pinMode(Gs2,OUTPUT);
}

void loop()
{
  for (int i=0;i<12;i++)
  {
    displayNumberA(i/10);
    displayNumberB(i%10);
    for (int j=0;j<60;j++)
    {
      displayNumberC(j/10);
      displayNumberD(j%10);
      for (int k=0;k<60;k++)
      {
        displayNumberE(k/10);
        displayNumberF(k%10);
        delay(1000);
      }
    }
  }

  /*
  hh=Serial.read();
  mm=Serial.read();
  ss=Serial.read();
  
  while(hh<=12)
  {
    displayNumberA(hh/10);
    displayNumberB(hh%10);
    while (mm<=60)
    {
      displayNumberC(mm/10);
      displayNumberD(mm%10);
      mm++;
      while(ss<=60)
      {
        displayNumberE(ss/10);
        displayNumberF(ss%10);
        ss++;
        delay(1000);
        if (ss==60)
        {
          ss=0;
        }
      }
      mm++;
      if (mm==60)
      {
        mm=0;
      }
    }
    hh++;
    
    if (alarmhh==hh)
    {
      if (alarmmm==mm)
      {
        if (alarmss==ss)
        {
          Alarm();
        }
      }
    }
    if (hh==12)
    {
      hh=0;
    }
    
  }*/
}

void displayNumber(int number, int serial)
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  
  digitalWrite(Gh1,LOW);
  digitalWrite(Gh2,LOW);
  digitalWrite(Gm1,LOW);
  digitalWrite(Gm2,LOW);
  digitalWrite(Gs1,LOW);
  digitalWrite(Gs2,LOW);
  
  if (serial==1)
  {
    digitalWrite(Gh1,HIGH);
  }
  if (serial==2)
  {
    digitalWrite(Gh2,HIGH);
  }
  if (serial==3)
  {
    digitalWrite(Gm1,HIGH);
  }
  if (serial==4)
  {
    digitalWrite(Gm2,HIGH);
  }
  if (serial==5)
  {
    digitalWrite(Gs1,HIGH);
  }
  if (serial==6)
  {
    digitalWrite(Gs2,HIGH);
  }

  if (number==0)
  {
    
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    //digitalWrite(g,HIGH);
  }
  
  if (number==1)
  {
//    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
//    digitalWrite(d,HIGH);
//    digitalWrite(e,HIGH);
//    digitalWrite(f,HIGH);
//    digitalWrite(g,HIGH);
  }
  
  if (number==2)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
//    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
//    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  
  if (number==3)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
//    digitalWrite(e,HIGH);
//    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  
  if (number==4)
  {
//    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
//    digitalWrite(d,HIGH);
//    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  
  if (number==5)
  {
    digitalWrite(a,HIGH);
//    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
//    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  
  if (number==6)
  {
    digitalWrite(a,HIGH);
//    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  
  if (number==7)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
//    digitalWrite(d,HIGH);
//    digitalWrite(e,HIGH);
//    digitalWrite(f,HIGH);
//    digitalWrite(g,HIGH);
  }
  
  if (number==8)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  
  if (number==9)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
//    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  
}

void Alarm()
{
  for (int i=0;i<1000;i++)
    tone(buzzer,i+1000,(i*i)+1000);
  for (int i=1000;i>0;i--)
    tone(buzzer,i+1000,(i*i)+1000);  
  for (int i=0;i<100;i++)
    tone(buzzer,i+1000,(i*i)+1000);
  for (int i=100;i>0;i--)
    tone(buzzer,i+1000,(i*i)+1000);
  for (int i=0;i<5000;i++)
    tone(buzzer,i+1000,(i*i)+1000);
  for (int i=5000;i>0;i--)
    tone(buzzer,i+1000,(i*i)+1000);
  for (int i=0;i<1500;i++)
    tone(buzzer,i+1000,(i*i)+1000);
  for (int i=1500;i>0;i--)
    tone(buzzer,i+1000,(i*i)+1000);
  for (int i=0;i<15000;i++)
    tone(buzzer,i+1000,(i*i)+1000);
  for (int i=15000;i>0;i--)
    tone(buzzer,i+1000,(i*i)+1000);
}
