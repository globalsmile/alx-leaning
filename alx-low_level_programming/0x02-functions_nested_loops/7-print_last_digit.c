#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 *
 */
int print_last_digit(int n)
{
	int last_digit = _abs(n % 10);

	_putchar('0' + last_digit);
	return (last_digit);
}
