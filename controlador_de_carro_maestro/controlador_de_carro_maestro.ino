
#include <Esplora.h>
#include<SoftwareSerial.h>

SoftwareSerial BT(8, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = Esplora.readJoystickX();
  int y = Esplora.readJoystickY();
  if (x > 300) {
    Serial.println("derecha");
    BT.print("d");
  } else if (x < -300) {
    Serial.println("izquierda");
    BT.print("a");
  } else if (y < -300) {
    Serial.println("abajo");
    BT.print("s");
  } else if (y > 300) {
    Serial.println("arriba");
    BT.print("w");
  }else {
    Serial.println("normal");
  }
}
