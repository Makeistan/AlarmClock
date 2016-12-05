/*
  This code is in public domain.
  Coded by Quswar Mahmood Abid
  www.github.com/Quswar/SevenSegmentDisplay
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

/*
Follow this configuration for making connections in common cathode LED 7-segment displays
'a' through 'g' are 7 segment display LEDs while 'h' is an LED as a point on display.
'G' is used for provide Ground which I am using as Enable here, thus LED will lit only iff I turn G off.
'h' can be connected as per needed.
'G' depends on the type of LED you are using. Usually it's common cathode. In case of commmon anode, we will provide a HIGH at this point.
*/


void setup() 
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
}

void loop() 
{
  displayNumber(8);
}




int  displayNumber(int X)
{
  switch (X)
  {
    case 0:
    {
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      digitalWrite(h,LOW);
    }
    case 1:
    {
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      digitalWrite(h,LOW);
    }
    case 2:
    {
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      digitalWrite(h,LOW);
    }
    case 3:
    {
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      digitalWrite(h,LOW);
    }
    case 4:
    {
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(h,LOW);
    }
    case 5:
    {
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(h,LOW);
    }
    case 6:
    {
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(h,LOW);
    }
    case 7:
    {
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      digitalWrite(h,LOW);
    }
    case 8:
    {
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(h,LOW);
    }
    case 9:
    {
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(h,LOW);
    }
    default:
    {
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      digitalWrite(h,LOW);    
    }
  }
}
