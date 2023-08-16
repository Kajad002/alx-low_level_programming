#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Description: takes an integer array, its size, and a function pointer.
 * It then iterates through each element of the array and calls the function
 * provided by the function pointer on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

