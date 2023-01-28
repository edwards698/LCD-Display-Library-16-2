/*
 eoroboticsdispaly Library 

 Demonstrates the use of a 16x2 LCD display. The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "the robot face" to the LCD.


  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K or 100K potentiometer:
   * ends to +5V and ground
   * wiper to LCD VO pin (pin 3)

 Library modified on added 28 Jan 2023
 by Edward Phiri.
 This example code is in the public domain.

*/
// include the library code:
#include "eoroboticsdispaly.h"

// initialize the library by associating any needed LCD interface pin
// with the Arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
eoroboticsdispaly lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.setCursor(3,0);
  lcd.print("(@)    (@)");
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(5, 1);
  // print the number of seconds since reset:
  lcd.print("[----]");
}

void loop() {

}
