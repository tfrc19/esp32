//Librerias que deben de ser instaladas para el correcto funcionamiento
#include "ThingSpeak.h"
#include "WiFi.h"
#include <HTTPClient.h>
#include <WiFiClient.h>
#include <Wire.h>
 

const char* ssid = "mundodelaprogramacion";//SSID de vuestro router.
const char* password = "**********"; //Password de vuestro router.


const char* serverName = "https://direccion-del-servidor.com/conexion.php";

//Dentro de la direccion del servidor debe estar alojado el web service 
//que contiene todo el codigo para la conexion de la base de datos y el almacenamiento de los datos.

WiFiClient cliente;

void setup() {
  Serial.begin(115200);
  Serial.println("Test de sensores:");

  WiFi.begin(ssid,password); //Conexion a la red wifi
  Serial.println("Connecting");

  configTime(0, 0, "pool.ntp.org", "time.nist.gov");
  setenv("TZ", "GMT5BST,M3.5.0/01,M10.5.0/02", 1);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Wifi conectado!");
  Serial.print("Conectado al WiFi - Direccion IP: ");
  Serial.println(WiFi.localIP());

} 

void loop() {
    Serial.begin(115200);
}