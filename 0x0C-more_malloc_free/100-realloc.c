#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to malloc
 * @old_size: size to be deallocated on th heap
 * @new_size: size to be reallocated on the heap
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *src;
	unsigned char *dest;
	unsigned int copy_size;
	unsigned int i;
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	src = (unsigned char *)ptr;
	dest = (unsigned char *)new_ptr;
	copy_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < copy_size; i++)
	{
		dest[i] = src[i];
	}
	free(ptr);
	return (new_ptr);
}
