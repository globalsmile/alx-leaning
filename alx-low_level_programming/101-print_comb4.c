#include <stdio.h>
#define LIMIT 10
/**
 * main - entry point
 * Return: always 0
 *
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < LIMIT; i++)
		for (j = i + 1; j < LIMIT; j++)
			for (k = j + 1; k < LIMIT; k++)
			{
				if (i != j && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');

	return (0);
}
