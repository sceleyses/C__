#include <stdio.h>
/*
 * Program for temperature conversion
 */

int main() {

    double temperature_celsius;
    double temperature_fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &temperature_celsius);
    temperature_fahrenheit = (temperature_celsius * 1.8) + 32;
    printf("%lfC is equal to %lf\n", temperature_celsius, temperature_fahrenheit);
    return 0;
}