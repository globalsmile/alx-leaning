#include <stdio.h>
#define SPACE ' '
void detab(char actual_string[]);
/**
 * detab - replaces tabs with space
 * @actual_string: array of character string
 *
 */
void detab(char actual_string[])
{
	int i;

	for (i = 0; actual_string[i] != '\0'; i++)
	{
		if (actual_string[i] == '\t')
		{
			actual_string[i] = SPACE;
		}
	}

	actual_string[i] = '\0';
	printf("%s\n", actual_string);
}

/**
 * main - entry point
 * Return: always 0
 *
 */
int main(void)
{
	char test_string[] = {'a', 'b', 'c', '\t', 'd', '\t', 'e', '\0'};

	detab(test_string);

	return (0);
}
