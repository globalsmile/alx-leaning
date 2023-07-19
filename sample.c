#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: This program prints all the values of a char.
 * It is an example of a program that will run forever.
 */
int main(void)
{
	char c;

	c = CHAR_MIN;
	while (c != CHAR_MAX)
	{
		printf("%d\n", c);
		c = c + 1;
	}
	return (EXIT_SUCCESS);
}
