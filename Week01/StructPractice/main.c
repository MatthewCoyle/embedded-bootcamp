#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float height;
} Person;

typedef struct
{
    float voltage;
    float current;
    float temperature;
} SensorData;

int main(void)
{
    Person Matthew;
    Matthew.age = 25;
    Matthew.height = 1.90f;
    strcpy(Matthew.name, "Matthew");

    SensorData sensor;
    sensor.voltage = 5.0f;
    sensor.current = 2.0f;
    sensor.temperature = 25.0f;

    printf("\nName: %s\nAge: %d\nHeight: %.2f\n", Matthew.name, Matthew.age, Matthew.height);
    printf("Sensor Data:\nVoltage: %.2f\nCurrent: %.2f\nTemperature: %.2f\n", 
        sensor.voltage, sensor.current, sensor.temperature);

    return 0;
}