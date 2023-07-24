#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @\0: terminating null byte.
 * @dest: buffer destination
 * @src: the buffer source
 * Return: pointer to 'dest'
 *
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');

	return (dest);
}
