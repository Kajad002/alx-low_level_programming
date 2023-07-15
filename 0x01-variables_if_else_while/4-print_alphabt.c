#include <stdio.h>
/**
 * main - a function that prints all alphabets in lower case, except q and e
 * DESCRIPTION: Using only the putchar function
 *
 * Return: ) (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
