/*
  This code is published in public domain.
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
'h' don't needs to be get connected since there is no room for a point in Clock display
*/


void setup() 
{
  // put your setup code here, to run once:

}

void loop() 
{
  // put your main code here, to run repeatedly:

}
