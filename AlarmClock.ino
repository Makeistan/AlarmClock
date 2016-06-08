/*
This code is published in public domain.
Any part of it or whole code can be edited/removed/modified, but reproducing and publishing it can be done only by providing proper credit to the resource (make-i-stan).

The Sketch is a simple 7-Segment-LED driver using Arduino MEGA with direct addressing to LED segments.
Since it is targeted for noobs, direct addressing is accompnied to avoid multiplexing logic. ICs for multiplexing can be used with UNO but it makes the circuit too complex.
Additional feature of this code is to make use of displaying digits on 7-Segment-LED display. So we will add a buzzer and timing mechanism to make Alarm Clock out of it.

Prepared
Specially prepared for Arduino Nights at Make-i-stan (Pakistan's first and only Makerspace).
For more details, visit www.Make-i-stan.co or www.Facebook.com/Makeistan or www.Twitter.com/Makeistan
*/

int a1=2;
int a2=3;
int a3=4;
int a4=5;
int a5=6;
int a6=7;
int a7=8;

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

int buzzer=9;


int hh=0;
int mm=0;
int ss=0;


void setup()
{
  pinMode(a1,OUTPUT);
  pinMode(a2,OUTPUT);
  pinMode(a3,OUTPUT);
  pinMode(a4,OUTPUT);
  pinMode(a5,OUTPUT);
  pinMode(a6,OUTPUT);
  pinMode(a7,OUTPUT);

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

  pinMode(buzzer,OUTPUT);
  

}

void loop()
{
  //please do something!
}

void displayNumberA(int number)
{
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(a5,LOW);
  digitalWrite(a6,LOW);
  digitalWrite(a7,LOW);
  
  if (number==0)
  {
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    //digitalWrite(a7,HIGH);
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
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
//    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
    digitalWrite(a5,HIGH);
//    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
  }
  
  if (number==3)
  {
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
//    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
  }
  
  if (number==4)
  {
//    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
//    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
  }
  
  if (number==5)
  {
    digitalWrite(a1,HIGH);
//    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
  }
  
  if (number==6)
  {
    digitalWrite(a1,HIGH);
//    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
  }
  
  if (number==7)
  {
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
//    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
//    digitalWrite(a6,HIGH);
//    digitalWrite(a7,HIGH);
  }
  
  if (number==8)
  {
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
  }
  
  if (number==9)
  {
    digitalWrite(a1,HIGH);
    digitalWrite(a2,HIGH);
    digitalWrite(a3,HIGH);
    digitalWrite(a4,HIGH);
//    digitalWrite(a5,HIGH);
    digitalWrite(a6,HIGH);
    digitalWrite(a7,HIGH);
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




void Time()
{
  //do something!
}

