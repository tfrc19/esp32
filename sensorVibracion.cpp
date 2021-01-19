

int sensor = 2;		
int valor;			// variable almacena valor del pin 2

void setup(){
  pinMode(sensor, INPUT);	// pin de entrada 2 
}


void loop(){
  valor = digitalRead(sensor);	// lee valor del pin 2
  if (valor == LOW){		// si se detecta una vibracion
   Serial.println("Vibracion detactada");
  delay(500);			
  }				
   Serial.println("No se detecta vibracion!"); //Si no se detacta vibracion
}