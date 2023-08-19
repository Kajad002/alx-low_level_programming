#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers to print
 * @...: variable interger aguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
