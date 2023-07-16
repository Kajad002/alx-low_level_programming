#include <stdio.h>
/**
 * main - a function that prints hexadecimal values in lowercase
 * DESCRIPTION: print 0 to 9 and a to f
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
		putchar('\n');
		return (0);
}
