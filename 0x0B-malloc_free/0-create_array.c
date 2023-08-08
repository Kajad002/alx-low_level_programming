#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes with a specific char.
 * @c: specific char to initialize with array.
 * @size:size to be allocated in heap
 * Description: Creates and array and returns NULL when str == 0.
 * Return: str
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
