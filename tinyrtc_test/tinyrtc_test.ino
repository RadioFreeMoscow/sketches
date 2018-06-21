#include <Wire.h>
#include "RTClib.h"
RTC_DS1307 RTC;

void setup() {
Serial.begin(9600);
Wire.begin();
RTC.begin();

if(RTC.isrunning()) {
  Serial.println("RTC is running");
}
    // Only use the below if you need to reset the time":
//    YYYY,MM,DD,HH,MM,SS
//RTC.adjust(DateTime(2018, 6, 9, 14, 56, 30));   


}

void loop () {
    DateTime now = RTC.now(); 
    Serial.print(now.day(), DEC);
    Serial.print("/");
    Serial.print(now.month(), DEC);   
    Serial.print('/');
    Serial.print(now.year(), DEC);
    Serial.print(' ');
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println(); 
    delay(60000);
}
