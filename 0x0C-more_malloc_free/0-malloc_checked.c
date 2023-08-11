#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: function parameter
 * Return: 98 when failed.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
