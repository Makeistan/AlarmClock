# Countdown Timer
Primary objective was to make a clock display using 7 Segment Display, after prototyping, now it's been turned into a countdown timer that by default counts down from an hour. It can also take time input via serial port and start descending from there.

This code is published in public domain.
Any part of it or whole code can be edited/removed/modified, but reproducing and publishing it can be done only by providing proper credit to the resource (make-i-stan).

The Sketch is a simple 7-Segment-LED driver using Arduino UNO with direct addressing all LED segments of all displays at the same time (see Fritzing for detail).

Each LED display has an enable terminal, so each time only one LED dispalys and a number is shown at one display only, keeping others off.

Since it is targeted for beginners, direct addressing is avoided at each terminal like the previous version, and multiplexing logic is employed.

Additional feature of this code is to make use of displaying digits on 7-Segment-LED display. So we will add a buzzer and timing mechanism to make Alarm Clock out of it.

In this way, a number displaying circuit can be turned into clock and an alarm eventually.

Specially prepared for Arduino Nights at Make-i-stan (Pakistan's first and only Makerspace).

For more details, visit www.Make-i-stan.co or www.Facebook.com/Makeistan or www.Twitter.com/Makeistan

g  f  G  a  b

|  |  |  |  |

//////a//////

//         //

f           b

//         //

//////g//////

//         //

e           c

//         //

//////d////// (h)

|  |  |  |  |

e  d  G  c  h

Follow this configuration for making connections in common cathode LED 7-segment displays

'a' through 'g' are 7 segment display LEDs while 'h' is an LED as a point on display.

'G' is used for provide Ground which I am using as Enable here, thus LED will lit only iff I turn G off.

'h' don't needs to be get connected since there is no room for a point in Clock display

#Update:
Updated version contains code for Countdown Timer, and not for alarm clock. Although it turns ON the alarm, but clock code is modified for the sake of simplicity.
