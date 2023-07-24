#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: a number greater than 5, less than 6 or 0
*/
int main(void)
{
		int n, remainder;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		remainder = n % 10;
		if (n < 0)
		{
			if (remainder < 6 && remainder != 0)
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n
				, remainder);
			else if (remainder == 0)
				printf("Last digit of %d is %d and is 0\n", n, remainder);
			else
				printf("Last digit of %d is %d and is greater than 5\n", n, remainder);
		}
		else
		{
			if (remainder < 6 && remainder != 0)
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n,
				remainder);
			else if (remainder == 0)
				printf("Last digit of %d is %d and is 0\n", n, remainder);
			else
				printf("Last digit of %d is %d and is greater than 5\n", n, remainder);
		}
		return (0);
}
