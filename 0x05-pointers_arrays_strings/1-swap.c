#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: interger to be swaped
 * @b: integer to be swaped
 *
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
