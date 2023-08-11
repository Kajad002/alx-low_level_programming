#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: function parameter
 * @size: size of input values
 * Return: NULL if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		byte_ptr[i] = 0;
	}
	return (ptr);
}
