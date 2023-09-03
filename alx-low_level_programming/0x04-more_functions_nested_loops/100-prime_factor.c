#include <stdio.h>
/**
 * main - prints the factors
 * Return: always 0
 */
int main(void)
{
	unsigned long int i, j;

	i = 612852475143;
	for (j = 2; j <= i; j++)
		while (i % j == 0)
			i = i / j;
	printf("%lu\n", j);
	return (0);
}
