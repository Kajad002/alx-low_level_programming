#include <stdio.h>
/**
 * main - a function that prints 0 to 9, seperated by comma (,)
 * DESCRIPTION: use putchar; 4 times maximum
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
