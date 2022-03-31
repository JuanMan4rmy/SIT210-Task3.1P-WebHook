// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_Sensor.h>

// This #include statement was automatically added by the Particle IDE.
#include <DHT.h>

// Constants
#define DHTPIN 5    // what pin we're connected to
#define DHTTYPE DHT11   // DHT 11  
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor 

void setup()
{
    dht.begin(); // Starting sensor reading
}

void loop()
{
    float temp = dht.readTemperature(); // variable
    Particle.publish("Temp: ", String(temp) + "°C", PRIVATE); // Print format
    delay(30000); //Delay 30 sec.
}