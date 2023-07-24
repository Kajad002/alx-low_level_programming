#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers,
 * @n:the number of elements of the array to be printed
 * @a: input array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index_of_array;

	for (index_of_array = 0; index_of_array < n; index_of_array++)
	{
		printf("%d", a[index_of_array]);
		if (index_of_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
