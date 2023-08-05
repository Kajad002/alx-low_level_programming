#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: counts the input
 * @argv: the string array that points the input
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
