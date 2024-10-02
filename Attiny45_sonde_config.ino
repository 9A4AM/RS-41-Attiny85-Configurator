#include<SoftwareSerial.h>
SoftwareSerial swsri(3,4); // RX,TX
// SoftwareSerial on a non-crystal 8MHz AVR 9600 baud


// register for 432.500MHz frequency
String reg_75 = "20";
String reg_76 = "ED";
String reg_77 = "FB";


// Change serial Nummber to Call
String reg_seriall = "TEST1234";


// Set power 0-7
String reg_power = "7";


void setup() {
  swsri.begin(9600);
  delay(1000);
  swsri.print("S");
  delay(100);
  swsri.print("T");
  delay(100);
  swsri.print("w");
  delay(100);
  swsri.print("s");
  delay(100);
  swsri.print("v");
  delay(100);
  swsri.print(char(13));
  delay(3000);
  send_reg75();
  send_reg76();
  send_reg77();
  delay(100);
  send_regCall();
  delay(100);
  send_regPwr();

  
  
}
void loop() {
 
}

void send_reg75() {
  delay(1000);
  swsri.print("T75");
  delay(100);
  swsri.print(char(13));
  delay(100);
  swsri.print(reg_75);
  delay(100);
  swsri.print(char(13));
  delay(100);  
}void send_reg76() {
  delay(1000);
  swsri.print("T76");
  delay(100);
  swsri.print(char(13));
  delay(100);
  swsri.print(reg_76);
  delay(100);  
  swsri.print(char(13));
  delay(100);
}
void send_reg77() {
  delay(1000);
  swsri.print("T77");
  delay(100);
  swsri.print(char(13));
  delay(100);
  swsri.print(reg_77);
  delay(100); 
  swsri.print(char(13));
  delay(100);  
}
void send_regCall() {
  delay(1000);
  swsri.print("i");
  delay(100);
  swsri.print(reg_seriall);
  delay(100);
  swsri.print(char(13));
  delay(100);
 
}
void send_regPwr() {
  delay(1000);
  swsri.print("o");
  delay(100);
  swsri.print(reg_power);
  delay(100);
  swsri.print(char(13));
  delay(100);
 
}
