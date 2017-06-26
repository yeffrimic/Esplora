/* 
 * Este programa sirve para controlar 
 * el mouse de una PC con el acelerometro 
 * de el arduino Esplora. 
 * 
 * Requerimientos: 
 * Arduino Esplora. 
 * 
 * Yeffri J. Salazar
 * Comunidad Arudino Guatemala. 
 * 25 junio 2017 
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
int ejeX= Esplora.readAccelerometer(X_AXIS);
int ejeY= Esplora.readAccelerometer(Y_AXIS);
int ejeZ= Esplora.readAccelerometer(Z_AXIS);
Serial.print("eje X = ");
Serial.println(ejeX);
Serial.print("eje y = ");
Serial.println(ejeY);
Serial.print("eje z = ");
Serial.println(ejeZ);
int mouseX = map ( ejeX,-140,140,-10,10);
int mouseY = map ( ejeY,-140,140,-10,10);
Mouse.move(mouseX,mouseY,0);
Esplora.writeRGB(ejeX,ejeY,ejeZ);
 delay(20); 
}
