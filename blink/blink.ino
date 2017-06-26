/*
 * Este programa sirve para controlar
 * el led RGB del arduino esplora. 
 * 
 * Requerimientos: 
 * Arduino Esplora
 * 
 * Yeffri J. Salazar
 * Comunidad Arduino Guatemala
 * 25 de junio 2017
 */

#include <Esplora.h>


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
Esplora.writeRGB(255,0,0);
delay(1000);
Esplora.writeRGB(0,255,0);
delay(1000);
Esplora.writeRGB(0,0,255);
delay(1000);

}
