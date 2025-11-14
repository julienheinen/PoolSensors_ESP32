
#include <Cloudchip.h>

double ph;
double potRedox;
double temp;
const char[] SSID = "";
const char[] WPASS = "";
const char[] TOKEN = "";
double pH
double temp;
double redOx;
int espId;

double getPh() {
  return 7.2;
}
double getTemp() {
  return 38;
}
double getRedox() {
  return 600;
}
Cloudship cloudchip; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Only use to connect terminal to computer
  //cloudchip.WiFiInit(SSID,WPASS);
  //cloudchip.Credentials(TOKEN);  
}

void loop() {
  // put your main code here, to run repeatedly:
  pH = getPh();
  temp = getTemp();
  redOx = getRedox();
  char[] output = "{\"pH\":"+pH+", \"temp\":"+temp+", \"redOx\":"+redOx+""}";
  cloudchip.run();
  cloudchip.deviceAttributes(output, espId);

  delay(5*60);
}



