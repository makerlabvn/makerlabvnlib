#include "MKL_HCSR04.h"

MKL_HCSR04 hc(2, new int[6]{5, 6, 7, 8, 9, 10}, 6); //initialisation class HCSR04 (trig pin , echo pin, number of sensor)

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    for (int i = 0; i < 6; i++)
        Serial.println(hc.dist(i)); //return curent distance in serial for sensor 1 to 6
    delay(60);                      // we suggest to use over 60ms measurement cycle, in order to prevent trigger signal to the echo signal.
}