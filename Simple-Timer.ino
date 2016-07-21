
/* From : Algobel
   Purpose of this document is to share knowledge for Everyone
   Email: algobelforum@gmail.com
   Future Trends : Internet Of Things (Connect every things to Internet and control them in remotely)
    No license  it is free to use
*/
void Timer();



void setup() {
  Serial.begin(115200);
}



void loop() {
  Timer();
  delay(1000);
  yield();
}

void Timer() {
  // local variable
  unsigned long timer = millis(); // Approx days  != 50 Days then Arduino millis() will reset to Zero
  int Seconds = Sec % 60; // Seconds
  int Mt = Sec /60  ; // Minutes
   int Mnts = Mt % 60  ; // Minutes
  int Hr = Sec / 3600; // Hour
  int Hour = Hr % 3600; // Hour
  int Dy = Sec / 86400L; // Day
   int Day = Dy % 86400L; // Day
  Serial.print(Day);
  Serial.print(":");
  Serial.print(Hour);
  Serial.print(":");
  Serial.print(Mnts);
  Serial.print(":");
  Serial.println(Seconds);



}

