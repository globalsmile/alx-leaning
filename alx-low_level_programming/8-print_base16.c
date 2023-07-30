#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 *
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
			putchar (num + '0');
			
	}

	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
