#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: constant argument parameter
 * @...: represents subseqent variable arguments
 * Description: function that calculates sum of variable arguments
 *
 * Return: sum of the function to main.
 */
int sum_them_all(unsigned int n, ...)
{

	va_list args;

	int sum = 0;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
