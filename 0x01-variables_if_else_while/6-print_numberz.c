#include <stdio.h>
/**
 * main - a function that prints 0 to 9
 * DESCRIPTION: Use putchar() only 2 times
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
		putchar('\n');
		return (0);
}
