#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a function of printf to print the last variable
 * DESCRIPTION: prints the last value of a variable
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digitof %d is %d and less than 6 and not 0\n", n, ld);
	}
	return (0);
}

