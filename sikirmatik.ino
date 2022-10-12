#include "sayac.h"
Sayac sayac(5);
void setup() {
  Serial.begin(9600);
  sayac.setup();
}

void loop() {
  
  sayac.attach();
}
