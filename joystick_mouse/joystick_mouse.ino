/*
 * Este programa sirve para controlar
 * el mouse de una PC con el joystick 
 * del arduino Esplora
 * Requerimientos: 
 * Arduino Esplora
 * 
 * Yeffri J. Salazar
 * Comunidad Arduino Guatemala
 * 25 de junio 2017
 */

#include <Esplora.h>
#include <Mouse.h>
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 Mouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
int valorX = Esplora.readJoystickX();
int valorY = Esplora.readJoystickY();
int boton = Esplora.readJoystickSwitch();
Serial.print("Joystick X: ");
Serial.println(valorX);
Serial.print("\tY : ");
Serial.println(valorY);
Serial.print("\tboton : ");
Serial.println(boton);
int mouseX = map( valorX,512, -512, -10,10);
int mouseY = map( valorY,-512, 512, -10,10);
Mouse.move(mouseX,mouseY,0);

if (boton == 0){
  Mouse.press();
}else{
  Mouse.release();
}
delay(10);


}
