#ifndef SENSOR_H
#define SENSOR_H

typedef struct
{
    float voltage;
    float current;
    float temperature;
} SensorData;

void printReadings(SensorData *readings, int size);
void updateTemperature(SensorData *reading, float newTemperature);
void findTemperatureRange(SensorData *readings, int size, float *minTemp, float *maxTemp);

#endif // SENSOR_H