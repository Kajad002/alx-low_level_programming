#include <stdio.h>
#include "main.h"

/**
 * main -  prints the number of arguments passed into it.
 * @argc: counts the input
 * @argv: the string array that points the input
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/

	printf("%d\n", (argc - 1));
	return (0);
}
