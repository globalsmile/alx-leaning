#include <stdio.h>
/*
 * temperatureInCelsuis - converts from fahrenheit to celsuis
 * @fahrenheit: temperature in fahrenheit
 * Return: temperature converted to celsuis
 */

int temperatureInCelsius(int fahrenheit);
int temperatureInCelsius(int fahrenheit){
        int c;

        c = (5.0 / 9.0) * (fahrenheit - 32); 
        return (c);
}
/*
 * main - entry point
 * 
 * Return: always 0
 */
int main(void) {
        int i = 0, j = 300, tempInCelsius;

        for (i; i < (j + 1); i++){
            if (i % 20 == 0){
                tempInCelsius = temperatureInCelsius(i);
                printf("%d %d\n", i, tempInCelsius);
            }
        }

        return(0);
}
