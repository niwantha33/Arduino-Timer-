
/* From : Algobel
   Purpose of this document is to share knowledge for Everyone
   Email: algobelforum@gmail.com
   Future Trends : Internet Of Things (Connect every things to Internet and control them in remotely)
    No license  it is free to use
*/
void Timer();
#include <ArduinoJson.h>


void setup() {
  Serial.begin(115200);

}

StaticJsonBuffer<100> jsonBuffer;
JsonObject& json_timer = jsonBuffer.createObject();


void loop() {
  Timer();
  int S=json_timer["S"]; // Seconds
  int M=json_timer["M"] ; // Minutes
  int H=json_timer["H"];  // Hour
  int D= json_timer["D"] ; // Day
  String T = (String) D+":"+(String) H+":"+(String) M+":"+(String) S;
  Serial.println(T);
  delay(1000);
  yield();
}

void Timer() {
  // local variable
  unsigned long timer = millis(); // Approx days  != 50 Days then Arduino millis() will reset to Zero
  int Sec = timer / 1000.00; // total Seconds
  int Seconds = Sec % 60; // Seconds
  int Mnts = Sec / 60 ; // Minutes
  int Hour = Sec / 3600; // Hour
  int Day = Sec / 86400; // Day
  // Encoding Data 
  json_timer["S"] = Seconds;
  json_timer["M"] = Mnts;
  json_timer["H"] = Hour;
  json_timer["D"] = Day;

  // Simply you can use this mehtod,If your program is complex use above method 
  /*Serial.print(Day);
    Serial.print(":");
    Serial.print(Hour);
    Serial.print(":");
    Serial.print(Mnts);
    Serial.print(":");
    Serial.println(Seconds); */
  


}

