#include <stdio.h>
/**
 * main - a function that prints lowercase alphabets in reverse order
 * DESCRIPTION: lets z come first, and a come last
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
