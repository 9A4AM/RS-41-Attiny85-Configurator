#include<SoftwareSerial.h>
SoftwareSerial swsri(3,4); // RX,TX


// register for 432.500MHz frequency
String reg_75 = "20";
String reg_76 = "ED";
String reg_77 = "FB";


// Change serial Nummber to Call
String reg_seriall = "R-9A1GIJ";

void setup() {
  swsri.begin(9600);
  //send_regCall();
  send_reg75();
  send_reg76();
  send_reg77();
  
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
  swsri.print(reg_seriall);
  delay(100);
  swsri.print(char(13));
  delay(100);
 
}
