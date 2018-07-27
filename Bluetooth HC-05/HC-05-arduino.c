#include <SoftwareSerial.h>

/*
To enter into AT mode, right after loading the program, press once the button on BT device

AT Commands available for HC05

AT
AT+RESET
AT+NAME=ROVER
AT+VERSION
AT+PSWD=0000
AT+ROLE=1

*/

SoftwareSerial BT1(10, 11); // RX | TX
void setup()
   { Serial.begin(9600);
     Serial.println("Starting the HC-05 module at 9600bps");
     Serial.println("Waiting of AT commands:");
     BT1.begin(9600); 
   }

void loop()
   {  if (BT1.available())
            Serial.write(BT1.read());
      if (Serial.available())
            BT1.write(Serial.read());
   }
