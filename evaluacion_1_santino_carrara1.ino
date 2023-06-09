int pinBoton = 8;
int pinLED_R = 2;
int pinLED_B = 3;
int pinLED_G = 4;
int potPin = A0;

int valorR = 0;
int valorG = 0;
int valorB = 0;

void setup()
{
	  
  pinMode(pinBoton, INPUT_PULLUP);
  pinMode(pinLED_R, OUTPUT);
  pinMode(pinLED_G, OUTPUT);
  pinMode(pinLED_B, OUTPUT);
  
}

void loop()
{
  

    if (digitalRead(pinBoton) == LOW) {
    // Si se presiona el botón, encender el LED RGB y permitir ajustar el color con el potenciómetro
    while (digitalRead(pinBoton) == LOW) {} // Esperar a que se suelte el botón
    while (digitalRead(pinBoton) == HIGH) {
     
      
    valorR = map(analogRead(potPin), 0, 1023, 0, 252);
    valorG = map(analogRead(potPin), 0, 1023, 0, 252);
    valorB = map(analogRead(potPin), 0, 1023, 0, 252);
 } 
}
}
