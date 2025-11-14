#include "Carrito.h"

Carrito Roberto; //Ingresa el nombre de tu carrito despues de Carrito y antes de el punto y coma

void setup() {
  // Ya se inicializa en el constructor
}

void loop() {
  // Escribe tu codigo en el loop
  /* 
  Ejemplos:
  (nombre de tu carrito).adelante();
  (nombre de tu carrito).parar();
  Recuerda usar delay para que las instrucciones sigan una secuencia
  */
  Roberto.adelante();
  delay(800);
  Roberto.derecha();
  delay(800);
}

