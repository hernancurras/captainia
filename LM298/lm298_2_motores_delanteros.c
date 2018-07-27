/* 
 Ejemplo de control de motor DC usando modulo L298
*/

int IN1 = 9;    // Input3 conectada al pin 5
int IN2 = 10;    // Input4 conectada al pin 4 
int ENA = 8;    // ENB conectada al pin 3 de Arduino

int IN3 = 13;    // Input3 conectada al pin 5
int IN4 = 12;    // Input4 conectada al pin 4 
int ENB = 11;    // ENB conectada al pin 3 de Arduino
void setup()

{
 pinMode (ENA, OUTPUT);
 pinMode (ENB, OUTPUT); 
 pinMode (IN1, OUTPUT);
 pinMode (IN2, OUTPUT);
 pinMode (IN3, OUTPUT);
 pinMode (IN4, OUTPUT);
}
void loop()
{
  //Preparamos la salida para que el motor gire en un sentido
  digitalWrite (IN1, HIGH);
  digitalWrite (IN2, LOW);
  digitalWrite (IN3, HIGH);
  digitalWrite (IN4, LOW);
  // Aplicamos PWM al pin ENB, haciendo girar el motor, cada 2 seg aumenta la velocidad
  //analogWrite(ENA,35);
  //analogWrite(ENB,35);
  //delay(2000);
  //analogWrite(ENA,40);
  //analogWrite(ENB,40);
  //delay(2000);
  analogWrite(ENA,50);
  analogWrite(ENB,50);
  delay(80000);
  // Apagamos el motor y esperamos 5 seg
  analogWrite(ENA,0);
  analogWrite(ENB,0);
  delay(1000);
  
    digitalWrite (IN1, LOW);
  digitalWrite (IN2, HIGH);
  digitalWrite (IN3, LOW);
  digitalWrite (IN4, HIGH);
  // Aplicamos PWM al pin ENB, haciendo girar el motor, cada 2 seg aumenta la velocidad
  //analogWrite(ENA,35);
  //analogWrite(ENB,35);
  //delay(2000);
  //analogWrite(ENA,40);
  //analogWrite(ENB,40);
  //delay(2000);
  analogWrite(ENA,50);
  analogWrite(ENB,50);
  delay(80000);
  // Apagamos el motor y esperamos 5 seg
  analogWrite(ENA,0);
  analogWrite(ENB,0);
  delay(1000);
}
