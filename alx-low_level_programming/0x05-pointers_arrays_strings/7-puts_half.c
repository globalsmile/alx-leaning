#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 *
 */
void puts_half(char *str)
{
	int len,n,i;

	len = _strlen(str);
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
		if (n % 2 == 0)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
