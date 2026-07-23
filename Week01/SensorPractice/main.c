#include <stdio.h>
#include "sensor.h"
#define READING_COUNT 3

int main(void)
{
    SensorData readings[READING_COUNT];
    readings[0].voltage = 5.0f;
    readings[0].current = 2.0f;
    readings[0].temperature = 25.0f;

    readings[1].voltage = 3.3f;
    readings[1].current = 1.5f; 
    readings[1].temperature = 22.0f;

    readings[2].voltage = 12.0f;
    readings[2].current = 0.5f;
    readings[2].temperature = 30.0f;

    updateTemperature(&readings[1], 28.5f);

    printReadings(readings, READING_COUNT);

    float minTemp, maxTemp;
    findTemperatureRange(readings, READING_COUNT, &minTemp, &maxTemp);
    printf("Temperature range: %.2fC to %.2fC\n", minTemp, maxTemp);

    return 0;
}