#include <stdio.h>
#include "sensor.h"

void printReadings(SensorData *readings, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Reading %d: %.2fV, %.2fA, %.2fC\n", i + 1, readings[i].voltage, 
            readings[i].current, readings[i].temperature);
    }
}

void updateTemperature(SensorData *reading, float newTemperature)
{
    reading->temperature = newTemperature;
}

void findTemperatureRange(SensorData *readings, int size, float *minTemp, float *maxTemp)
{
    *minTemp = readings[0].temperature; 
    *maxTemp = readings[0].temperature;

    for (int i = 1; i < size; i++)
    {
        if (readings[i].temperature < *minTemp)
        {
            *minTemp = readings[i].temperature;
        }
        if (readings[i].temperature > *maxTemp)
        {
            *maxTemp = readings[i].temperature;
        }
    }
}