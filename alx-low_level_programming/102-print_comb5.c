#include <stdio.h>
#define LOWER_LIMIT 0
#define UPPER_LIMIT 100
#define MODULO 10
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = LOWER_LIMIT; i < UPPER_LIMIT; i++)
	{
		for (j = i + 1; j < UPPER_LIMIT; j++)
		{
			putchar(i / MODULO + '0');
			putchar(i % MODULO + '0');
			putchar(' ');
			putchar(j / MODULO + '0');
			putchar(j % MODULO + '0');

			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
