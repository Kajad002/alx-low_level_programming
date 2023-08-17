#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: An array of pointers to the command line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (2);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
