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

int a2=10;
int a3=11;

int b1=22;
int b2=24;
int b3=26;
int b4=28;
int b5=30;
int b6=32;
int b7=34;

int c1=36;
int c2=38;
int c3=40;
int c4=42;
int c5=44;
int c6=46;
int c7=48;

int d1=31;
int d2=33;
int d3=35;
int d4=37;
int d5=39;
int d6=41;
int d7=43;

int e1=45;
int e2=47;
int e3=49;
int e4=51;
int e5=53;
int e6=50;
int e7=52;

int f1=2;
int f2=3;
int f3=4;
int f4=5;
int f5=6;
int f6=7;
int f7=8;

int buzzer=9;

int hh=0;
int mm=0;
int ss=0;

int alarmhh=0;
int alarmmm=0;
int alarmss=0;



void setup()
{
  Serial.begin(9600);
  
//  pinMode(a1,OUTPUT);
  pinMode(a2,OUTPUT);
  pinMode(a3,OUTPUT);
//  pinMode(a4,OUTPUT);
//  pinMode(a5,OUTPUT);
//  pinMode(a6,OUTPUT);
//  pinMode(a7,OUTPUT);

  pinMode(b1,OUTPUT);
  pinMode(b2,OUTPUT);
  pinMode(b3,OUTPUT);
  pinMode(b4,OUTPUT);
  pinMode(b5,OUTPUT);
  pinMode(b6,OUTPUT);
  pinMode(b7,OUTPUT);

  pinMode(c1,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(c3,OUTPUT);
  pinMode(c4,OUTPUT);
  pinMode(c5,OUTPUT);
  pinMode(c6,OUTPUT);
  pinMode(c7,OUTPUT);

  pinMode(d1,OUTPUT);
  pinMode(d2,OUTPUT);
  pinMode(d3,OUTPUT);
  pinMode(d4,OUTPUT);
  pinMode(d5,OUTPUT);
  pinMode(d6,OUTPUT);
  pinMode(d7,OUTPUT);

  pinMode(e1,OUTPUT);
  pinMode(e2,OUTPUT);
  pinMode(e3,OUTPUT);
  pinMode(e4,OUTPUT);
  pinMode(e5,OUTPUT);
  pinMode(e6,OUTPUT);
  pinMode(e7,OUTPUT);

  pinMode(f1,OUTPUT);
  pinMode(f2,OUTPUT);
  pinMode(f3,OUTPUT);
  pinMode(f4,OUTPUT);
  pinMode(f5,OUTPUT);
  pinMode(f6,OUTPUT);
  pinMode(f7,OUTPUT);

  pinMode(buzzer,OUTPUT);
  

}

void loop()
{
  
  //please do something!
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

void displayNumberA(int number)
{
//  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
//  digitalWrite(a4,LOW);
//  digitalWrite(a5,LOW);
//  digitalWrite(a6,LOW);
//  digitalWrite(a7,LOW);
  
  if (number==0)
  {
    /*
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    //digitalWrite(a7,HIGH);
    */
  }
  
  if (number==1)
  {
//    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
//    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
//    digitalWrite(a6,HIGH);
//    digitalWrite(a7,HIGH);
  }
  
  if (number==2)
  {
    /*
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
//    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
    digitalWrite(a5,HIGH);
//    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
    */
  }
  
  if (number==3)
  {
    /*
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
//    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
    */
  }
  
  if (number==4)
  {
    /*
//    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
//    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
    */
  }
  
  if (number==5)
  {
    /*
    digitalWrite(a1,HIGH);
//    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
    */
  }
  
  if (number==6)
  {
    /*
    digitalWrite(a1,HIGH);
//    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
    */
  }
  
  if (number==7)
  {
    /*
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
//    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
//    digitalWrite(a6,HIGH);
//    digitalWrite(a7,HIGH);
*/
  }
  
  if (number==8)
  {
    /*
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
    */
  }
  
  if (number==9)
  {
    /*
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
    */
  }
  
}




void displayNumberB(int number)
{
  digitalWrite(b1,LOW);
  digitalWrite(b2,LOW);
  digitalWrite(b3,LOW);
  digitalWrite(b4,LOW);
  digitalWrite(b5,LOW);
  digitalWrite(b6,LOW);
  digitalWrite(b7,LOW);
  
  if (number==0)
  {
    digitalWrite(b1,HIGH);
    digitalWrite(b2,HIGH);
    digitalWrite(b3,HIGH);
    digitalWrite(b4,HIGH);
    digitalWrite(b5,HIGH);
    digitalWrite(b6,HIGH);
    //digitalWrite(b7,HIGH);
  }
  
  if (number==1)
  {
//    digitalWrite(b1,HIGH);
    digitalWrite(b2,HIGH);
    digitalWrite(b3,HIGH);
//    digitalWrite(b4,HIGH);
//    digitalWrite(b5,HIGH);
//    digitalWrite(b6,HIGH);
//    digitalWrite(b7,HIGH);
  }
  
  if (number==2)
  {
    digitalWrite(b1,HIGH);
    digitalWrite(b2,HIGH);
//    digitalWrite(b3,HIGH);
    digitalWrite(b4,HIGH);
    digitalWrite(b5,HIGH);
//    digitalWrite(b6,HIGH);
    digitalWrite(b7,HIGH);
  }
  
  if (number==3)
  {
    digitalWrite(b1,HIGH);
    digitalWrite(b2,HIGH);
    digitalWrite(b3,HIGH);
    digitalWrite(b4,HIGH);
//    digitalWrite(b5,HIGH);
//    digitalWrite(b6,HIGH);
    digitalWrite(b7,HIGH);
  }
  
  if (number==4)
  {
//    digitalWrite(b1,HIGH);
    digitalWrite(b2,HIGH);
    digitalWrite(b3,HIGH);
//    digitalWrite(b4,HIGH);
//    digitalWrite(b5,HIGH);
    digitalWrite(b6,HIGH);
    digitalWrite(b7,HIGH);
  }
  
  if (number==5)
  {
    digitalWrite(b1,HIGH);
//    digitalWrite(b2,HIGH);
    digitalWrite(b3,HIGH);
    digitalWrite(b4,HIGH);
//    digitalWrite(b5,HIGH);
    digitalWrite(b6,HIGH);
    digitalWrite(b7,HIGH);
  }
  
  if (number==6)
  {
    digitalWrite(b1,HIGH);
//    digitalWrite(b2,HIGH);
    digitalWrite(b3,HIGH);
    digitalWrite(b4,HIGH);
    digitalWrite(b5,HIGH);
    digitalWrite(b6,HIGH);
    digitalWrite(b7,HIGH);
  }
  
  if (number==7)
  {
    digitalWrite(b1,HIGH);
    digitalWrite(b2,HIGH);
    digitalWrite(b3,HIGH);
//    digitalWrite(b4,HIGH);
//    digitalWrite(b5,HIGH);
//    digitalWrite(b6,HIGH);
//    digitalWrite(b7,HIGH);
  }
  
  if (number==8)
  {
    digitalWrite(b1,HIGH);
    digitalWrite(b2,HIGH);
    digitalWrite(b3,HIGH);
    digitalWrite(b4,HIGH);
    digitalWrite(b5,HIGH);
    digitalWrite(b6,HIGH);
    digitalWrite(b7,HIGH);
  }
  
  if (number==9)
  {
    digitalWrite(b1,HIGH);
    digitalWrite(b2,HIGH);
    digitalWrite(b3,HIGH);
    digitalWrite(b4,HIGH);
//    digitalWrite(b5,HIGH);
    digitalWrite(b6,HIGH);
    digitalWrite(b7,HIGH);
  }
  
}




void displayNumberC(int number)
{
  digitalWrite(c1,LOW);
  digitalWrite(c2,LOW);
  digitalWrite(c3,LOW);
  digitalWrite(c4,LOW);
  digitalWrite(c5,LOW);
  digitalWrite(c6,LOW);
  digitalWrite(c7,LOW);
  
  if (number==0)
  {
    digitalWrite(c1,HIGH);
    digitalWrite(c2,HIGH);
    digitalWrite(c3,HIGH);
    digitalWrite(c4,HIGH);
    digitalWrite(c5,HIGH);
    digitalWrite(c6,HIGH);
    //digitalWrite(c7,HIGH);
  }
  
  if (number==1)
  {
//    digitalWrite(c1,HIGH);
    digitalWrite(c2,HIGH);
    digitalWrite(c3,HIGH);
//    digitalWrite(c4,HIGH);
//    digitalWrite(c5,HIGH);
//    digitalWrite(c6,HIGH);
//    digitalWrite(c7,HIGH);
  }
  
  if (number==2)
  {
    digitalWrite(c1,HIGH);
    digitalWrite(c2,HIGH);
//    digitalWrite(c3,HIGH);
    digitalWrite(c4,HIGH);
    digitalWrite(c5,HIGH);
//    digitalWrite(c6,HIGH);
    digitalWrite(c7,HIGH);
  }
  
  if (number==3)
  {
    digitalWrite(c1,HIGH);
    digitalWrite(c2,HIGH);
    digitalWrite(c3,HIGH);
    digitalWrite(c4,HIGH);
//    digitalWrite(c5,HIGH);
//    digitalWrite(c6,HIGH);
    digitalWrite(c7,HIGH);
  }
  
  if (number==4)
  {
//    digitalWrite(c1,HIGH);
    digitalWrite(c2,HIGH);
    digitalWrite(c3,HIGH);
//    digitalWrite(c4,HIGH);
//    digitalWrite(c5,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c7,HIGH);
  }
  
  if (number==5)
  {
    digitalWrite(c1,HIGH);
//    digitalWrite(c2,HIGH);
    digitalWrite(c3,HIGH);
    digitalWrite(c4,HIGH);
//    digitalWrite(c5,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c7,HIGH);
  }
  
  if (number==6)
  {
    digitalWrite(c1,HIGH);
//    digitalWrite(c2,HIGH);
    digitalWrite(c3,HIGH);
    digitalWrite(c4,HIGH);
    digitalWrite(c5,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c7,HIGH);
  }
  
  if (number==7)
  {
    digitalWrite(c1,HIGH);
    digitalWrite(c2,HIGH);
    digitalWrite(c3,HIGH);
//    digitalWrite(c4,HIGH);
//    digitalWrite(c5,HIGH);
//    digitalWrite(c6,HIGH);
//    digitalWrite(c7,HIGH);
  }
  
  if (number==8)
  {
    digitalWrite(c1,HIGH);
    digitalWrite(c2,HIGH);
    digitalWrite(c3,HIGH);
    digitalWrite(c4,HIGH);
    digitalWrite(c5,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c7,HIGH);
  }
  
  if (number==9)
  {
    digitalWrite(c1,HIGH);
    digitalWrite(c2,HIGH);
    digitalWrite(c3,HIGH);
    digitalWrite(c4,HIGH);
//    digitalWrite(c5,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c7,HIGH);
  }
  
}




void displayNumberD(int number)
{
  digitalWrite(d1,LOW);
  digitalWrite(d2,LOW);
  digitalWrite(d3,LOW);
  digitalWrite(d4,LOW);
  digitalWrite(d5,LOW);
  digitalWrite(d6,LOW);
  digitalWrite(d7,LOW);
  
  if (number==0)
  {
    digitalWrite(d1,HIGH);
    digitalWrite(d2,HIGH);
    digitalWrite(d3,HIGH);
    digitalWrite(d4,HIGH);
    digitalWrite(d5,HIGH);
    digitalWrite(d6,HIGH);
    //digitalWrite(d7,HIGH);
  }
  
  if (number==1)
  {
//    digitalWrite(d1,HIGH);
    digitalWrite(d2,HIGH);
    digitalWrite(d3,HIGH);
//    digitalWrite(d4,HIGH);
//    digitalWrite(d5,HIGH);
//    digitalWrite(d6,HIGH);
//    digitalWrite(d7,HIGH);
  }
  
  if (number==2)
  {
    digitalWrite(d1,HIGH);
    digitalWrite(d2,HIGH);
//    digitalWrite(d3,HIGH);
    digitalWrite(d4,HIGH);
    digitalWrite(d5,HIGH);
//    digitalWrite(d6,HIGH);
    digitalWrite(d7,HIGH);
  }
  
  if (number==3)
  {
    digitalWrite(d1,HIGH);
    digitalWrite(d2,HIGH);
    digitalWrite(d3,HIGH);
    digitalWrite(d4,HIGH);
//    digitalWrite(d5,HIGH);
//    digitalWrite(d6,HIGH);
    digitalWrite(d7,HIGH);
  }
  
  if (number==4)
  {
//    digitalWrite(d1,HIGH);
    digitalWrite(d2,HIGH);
    digitalWrite(d3,HIGH);
//    digitalWrite(d4,HIGH);
//    digitalWrite(d5,HIGH);
    digitalWrite(d6,HIGH);
    digitalWrite(d7,HIGH);
  }
  
  if (number==5)
  {
    digitalWrite(d1,HIGH);
//    digitalWrite(d2,HIGH);
    digitalWrite(d3,HIGH);
    digitalWrite(d4,HIGH);
//    digitalWrite(d5,HIGH);
    digitalWrite(d6,HIGH);
    digitalWrite(d7,HIGH);
  }
  
  if (number==6)
  {
    digitalWrite(d1,HIGH);
//    digitalWrite(d2,HIGH);
    digitalWrite(d3,HIGH);
    digitalWrite(d4,HIGH);
    digitalWrite(d5,HIGH);
    digitalWrite(d6,HIGH);
    digitalWrite(d7,HIGH);
  }
  
  if (number==7)
  {
    digitalWrite(d1,HIGH);
    digitalWrite(d2,HIGH);
    digitalWrite(d3,HIGH);
//    digitalWrite(d4,HIGH);
//    digitalWrite(d5,HIGH);
//    digitalWrite(d6,HIGH);
//    digitalWrite(d7,HIGH);
  }
  
  if (number==8)
  {
    digitalWrite(d1,HIGH);
    digitalWrite(d2,HIGH);
    digitalWrite(d3,HIGH);
    digitalWrite(d4,HIGH);
    digitalWrite(d5,HIGH);
    digitalWrite(d6,HIGH);
    digitalWrite(d7,HIGH);
  }
  
  if (number==9)
  {
    digitalWrite(d1,HIGH);
    digitalWrite(d2,HIGH);
    digitalWrite(d3,HIGH);
    digitalWrite(d4,HIGH);
//    digitalWrite(d5,HIGH);
    digitalWrite(d6,HIGH);
    digitalWrite(d7,HIGH);
  }
  
}


void displayNumberE(int number)
{
  digitalWrite(e1,LOW);
  digitalWrite(e2,LOW);
  digitalWrite(e3,LOW);
  digitalWrite(e4,LOW);
  digitalWrite(e5,LOW);
  digitalWrite(e6,LOW);
  digitalWrite(e7,LOW);
  
  if (number==0)
  {
    digitalWrite(e1,HIGH);
    digitalWrite(e2,HIGH);
    digitalWrite(e3,HIGH);
    digitalWrite(e4,HIGH);
    digitalWrite(e5,HIGH);
    digitalWrite(e6,HIGH);
    //digitalWrite(e7,HIGH);
  }
  
  if (number==1)
  {
//    digitalWrite(e1,HIGH);
    digitalWrite(e2,HIGH);
    digitalWrite(e3,HIGH);
//    digitalWrite(e4,HIGH);
//    digitalWrite(e5,HIGH);
//    digitalWrite(e6,HIGH);
//    digitalWrite(e7,HIGH);
  }
  
  if (number==2)
  {
    digitalWrite(e1,HIGH);
    digitalWrite(e2,HIGH);
//    digitalWrite(e3,HIGH);
    digitalWrite(e4,HIGH);
    digitalWrite(e5,HIGH);
//    digitalWrite(e6,HIGH);
    digitalWrite(e7,HIGH);
  }
  
  if (number==3)
  {
    digitalWrite(e1,HIGH);
    digitalWrite(e2,HIGH);
    digitalWrite(e3,HIGH);
    digitalWrite(e4,HIGH);
//    digitalWrite(e5,HIGH);
//    digitalWrite(e6,HIGH);
    digitalWrite(e7,HIGH);
  }
  
  if (number==4)
  {
//    digitalWrite(e1,HIGH);
    digitalWrite(e2,HIGH);
    digitalWrite(e3,HIGH);
//    digitalWrite(e4,HIGH);
//    digitalWrite(e5,HIGH);
    digitalWrite(e6,HIGH);
    digitalWrite(e7,HIGH);
  }
  
  if (number==5)
  {
    digitalWrite(e1,HIGH);
//    digitalWrite(e2,HIGH);
    digitalWrite(e3,HIGH);
    digitalWrite(e4,HIGH);
//    digitalWrite(e5,HIGH);
    digitalWrite(e6,HIGH);
    digitalWrite(e7,HIGH);
  }
  
  if (number==6)
  {
    digitalWrite(e1,HIGH);
//    digitalWrite(e2,HIGH);
    digitalWrite(e3,HIGH);
    digitalWrite(e4,HIGH);
    digitalWrite(e5,HIGH);
    digitalWrite(e6,HIGH);
    digitalWrite(e7,HIGH);
  }
  
  if (number==7)
  {
    digitalWrite(e1,HIGH);
    digitalWrite(e2,HIGH);
    digitalWrite(e3,HIGH);
//    digitalWrite(e4,HIGH);
//    digitalWrite(e5,HIGH);
//    digitalWrite(e6,HIGH);
//    digitalWrite(e7,HIGH);
  }
  
  if (number==8)
  {
    digitalWrite(e1,HIGH);
    digitalWrite(e2,HIGH);
    digitalWrite(e3,HIGH);
    digitalWrite(e4,HIGH);
    digitalWrite(e5,HIGH);
    digitalWrite(e6,HIGH);
    digitalWrite(e7,HIGH);
  }
  
  if (number==9)
  {
    digitalWrite(e1,HIGH);
    digitalWrite(e2,HIGH);
    digitalWrite(e3,HIGH);
    digitalWrite(e4,HIGH);
//    digitalWrite(e5,HIGH);
    digitalWrite(e6,HIGH);
    digitalWrite(e7,HIGH);
  }
  
}




void displayNumberF(int number)
{
  digitalWrite(f1,LOW);
  digitalWrite(f2,LOW);
  digitalWrite(f3,LOW);
  digitalWrite(f4,LOW);
  digitalWrite(f5,LOW);
  digitalWrite(f6,LOW);
  digitalWrite(f7,LOW);
  
  if (number==0)
  {
    digitalWrite(f1,HIGH);
    digitalWrite(f2,HIGH);
    digitalWrite(f3,HIGH);
    digitalWrite(f4,HIGH);
    digitalWrite(f5,HIGH);
    digitalWrite(f6,HIGH);
    //digitalWrite(f7,HIGH);
  }
  
  if (number==1)
  {
//    digitalWrite(f1,HIGH);
    digitalWrite(f2,HIGH);
    digitalWrite(f3,HIGH);
//    digitalWrite(f4,HIGH);
//    digitalWrite(f5,HIGH);
//    digitalWrite(f6,HIGH);
//    digitalWrite(f7,HIGH);
  }
  
  if (number==2)
  {
    digitalWrite(f1,HIGH);
    digitalWrite(f2,HIGH);
//    digitalWrite(f3,HIGH);
    digitalWrite(f4,HIGH);
    digitalWrite(f5,HIGH);
//    digitalWrite(f6,HIGH);
    digitalWrite(f7,HIGH);
  }
  
  if (number==3)
  {
    digitalWrite(f1,HIGH);
    digitalWrite(f2,HIGH);
    digitalWrite(f3,HIGH);
    digitalWrite(f4,HIGH);
//    digitalWrite(f5,HIGH);
//    digitalWrite(f6,HIGH);
    digitalWrite(f7,HIGH);
  }
  
  if (number==4)
  {
//    digitalWrite(f1,HIGH);
    digitalWrite(f2,HIGH);
    digitalWrite(f3,HIGH);
//    digitalWrite(f4,HIGH);
//    digitalWrite(f5,HIGH);
    digitalWrite(f6,HIGH);
    digitalWrite(f7,HIGH);
  }
  
  if (number==5)
  {
    digitalWrite(f1,HIGH);
//    digitalWrite(f2,HIGH);
    digitalWrite(f3,HIGH);
    digitalWrite(f4,HIGH);
//    digitalWrite(f5,HIGH);
    digitalWrite(f6,HIGH);
    digitalWrite(f7,HIGH);
  }
  
  if (number==6)
  {
    digitalWrite(f1,HIGH);
//    digitalWrite(f2,HIGH);
    digitalWrite(f3,HIGH);
    digitalWrite(f4,HIGH);
    digitalWrite(f5,HIGH);
    digitalWrite(f6,HIGH);
    digitalWrite(f7,HIGH);
  }
  
  if (number==7)
  {
    digitalWrite(f1,HIGH);
    digitalWrite(f2,HIGH);
    digitalWrite(f3,HIGH);
//    digitalWrite(f4,HIGH);
//    digitalWrite(f5,HIGH);
//    digitalWrite(f6,HIGH);
//    digitalWrite(f7,HIGH);
  }
  
  if (number==8)
  {
    digitalWrite(f1,HIGH);
    digitalWrite(f2,HIGH);
    digitalWrite(f3,HIGH);
    digitalWrite(f4,HIGH);
    digitalWrite(f5,HIGH);
    digitalWrite(f6,HIGH);
    digitalWrite(f7,HIGH);
  }
  
  if (number==9)
  {
    digitalWrite(f1,HIGH);
    digitalWrite(f2,HIGH);
    digitalWrite(f3,HIGH);
    digitalWrite(f4,HIGH);
//    digitalWrite(f5,HIGH);
    digitalWrite(f6,HIGH);
    digitalWrite(f7,HIGH);
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
