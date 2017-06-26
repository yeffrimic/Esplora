#include <SoftwareSerial.h>
SoftwareSerial BT(2, 3); //tx,rx

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin(9600);

}
void moverDerecha(){
  
}
void moverIzquierda(){
  
}
void moverAdelante(){
  
}
void moverAtras(){
  
}
void parar(){
  
}
void loop() {
  // put your main code here, to run repeatedly:
  while (BT.available() > 0) {
    char dataIn = BT.read();
    if ( dataIn == 'a') {
      moverizquierda();

    } else if ( dataIn == 's') {
      moverAtras();
    } else if (dataIn == 'd') {
      moverDerecha();

    } else if ( dataIn == 'w') {
      moverAdelante();
    } else {
      parar();

    }
  }
}
