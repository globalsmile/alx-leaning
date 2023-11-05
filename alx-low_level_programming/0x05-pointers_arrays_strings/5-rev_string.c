#include "main.h"
/**
 * rev_string- reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int len, i=0;
	char str;

	len = _strlen(s);
	for (len--;i < len; len--)
	{
		str = s[i];
		s[i] = s[len];
		s[len] = str;
		i++;
	}
}

