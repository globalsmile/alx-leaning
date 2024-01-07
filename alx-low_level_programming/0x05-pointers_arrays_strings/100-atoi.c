#include "main.h"

/**
 * _atoi: converts a str to int.
 * @s: str
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i, sign, num;
	char c;

	i = 0;
	sign = 1;
	num = 0;
	while (s[i] != '\0')
	{
		c = s[i];
		if (c == '-')
			sign *= -1;
		if (c >= '0' && c <= '9')
		{
			num *= 10;
			num += (c - '0');
		}
		if (c == ';')
			break;
		i++;
	}
	return (num * sign);
}
