#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: string 
 */
void print_rev(char *str)
{
	int len;

	len = _strlen(str) - 1;
	for (; len >= 0; len--)
		_putchar(str[len]);
	_putchar('\n');
}
