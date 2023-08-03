#include <stdio.h>
#define LOWER_LIMIT 0
#define UPPER_LIMIT 100

void reverse(char actual_string[]);
/**
 * reverse - reverses a character string
 * @actual_string: character string
 */
void reverse(char actual_string[])
{
	int i, j; /* counters */
	char reverse_string[UPPER_LIMIT]; /* stores the reverse string*/

	for (i = LOWER_LIMIT; actual_string[i] != '\0'; i++)
		;
	for (j = LOWER_LIMIT; j < i; j++)
		reverse_string[j] = actual_string[i - (j + 1)];

	reverse_string[i] = '\0';

	printf("%s\n", reverse_string);
}

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	char test[] = {'h', 'e', 'l', 'l', 'o', '\0'};

	reverse(test);

	return (0);
}
