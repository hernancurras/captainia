/* 
 Ejemplo de control de motor DC usando modulo L298
 http://electronilab.co/tienda/driver-dual-para-motores-full-bridge-l298n/
 */
#include <SoftwareSerial.h>

SoftwareSerial BT1(10, 11); // RX | TX

int ENA = 7;    // ENB conectada al pin 3 de Arduino
int IN1 = 6;    // Input3 conectada al pin 5
int IN2 = 5;    // Input4 conectada al pin 4 

int IN4 = 4;    // Input4 conectada al pin 4 
int IN3 = 3;    // Input3 conectada al pin 5
int ENB = 2;    // ENB conectada al pin 3 de Arduino
char SPEED;
const int MAX = 50; //velocidad maxima

void setup()

{
 pinMode (ENA, OUTPUT);
 pinMode (ENB, OUTPUT);
 
 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
 
 Serial.begin(9600);
 BT1.begin(9600); 
}

void loop()
{
  if (BT1.available())
            SPEED = BT1.read();
            
  Serial.println(SPEED);
  
  if (SPEED == 'a') {
    digitalWrite (IN1, HIGH);
    digitalWrite (IN2, LOW);
    digitalWrite (IN3, HIGH);
    digitalWrite (IN4, LOW);
    analogWrite(ENA,60);
    analogWrite(ENB,60);
    }
            
  else if (SPEED == 'm') {
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, HIGH);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, HIGH);
    analogWrite(ENA,60);
    analogWrite(ENB,60);
    }
    
  else if (SPEED == 'd') {
    digitalWrite (IN1, HIGH);
    digitalWrite (IN2, LOW);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, LOW);
    analogWrite(ENA,60);
    analogWrite(ENB,60);
    }
  
  else if (SPEED == 'i') {
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, LOW);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, HIGH);
    analogWrite(ENA,60);
    analogWrite(ENB,60);
    }
    
    
  else if (SPEED == 's') {
    digitalWrite (IN1, LOW);
    digitalWrite (IN2, LOW);
    digitalWrite (IN3, LOW);
    digitalWrite (IN4, LOW);
    }

  delay(10);
}
