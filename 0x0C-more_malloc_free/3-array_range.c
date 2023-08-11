#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min:function arguements
 * @max:function arguement
 * Return: to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int size = max - min + 1;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
