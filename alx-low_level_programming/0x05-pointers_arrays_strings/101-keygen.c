#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum, i, n;
    char password[100];

    sum = 0;
    i = 0;
    while (sum < 2772)
    {
        n = rand() % 127;
        if (n > 32)
        {
            password[i] = n;
            sum += password[i++];
        }
    }
    password[i] = '\0';
    printf("%s", password);
    return (0);
}