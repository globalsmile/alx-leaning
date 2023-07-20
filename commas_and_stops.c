#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: This program prints all the values of a char.
*/
int main(void)
{
	int this_char, comma_count, stop_count;

	comma_count = stop_count = 0;
	this_char = getchar();
	while (this_char != EOF)
	{
		if (this_char == ',')
			comma_count++;
		if (this_char == '.')
			stop_count++;
		this_char = getchar();
	}
	printf("There were %d commas and %d stops.\n", comma_count, stop_count);
	return (EXIT_SUCCESS);
}
