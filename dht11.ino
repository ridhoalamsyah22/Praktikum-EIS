#include <DHT.h> //library DHT
#define DHTPIN 2 //pin DATA konek ke pin 2 Arduino
#define DHTTYPE DHT11 //tipe sensor DHT11
DHT dht(DHTPIN, DHTTYPE); //set sensor + koneksi pin

float humi, temp;//deklarasi variabel 

void setup()
{
  Serial.begin(9600); //baud 9600
  delay(1000);  
}

void loop(){
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  Serial.print((String)"Temperature = " + t + " °C");
  Serial.println();
  Serial.print((String)"Humidity    = " + h + " %");
  Serial.println();
}
