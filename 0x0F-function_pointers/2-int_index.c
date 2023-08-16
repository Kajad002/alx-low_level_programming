#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for an integer
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @cmp: the comparison function
 * Description: function is used to find the integer
 * Return: -1 if not even
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
/**
 * is_even - compares the function
 * @num: parameter
 * Return: even
 */
int is_even(int num)
{
	return (num % 2 == 0);
}
