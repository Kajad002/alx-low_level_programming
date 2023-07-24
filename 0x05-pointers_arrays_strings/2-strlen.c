#include "main.h"

/**
 *  _strlen -  returns the length of a string
 *  @str: the command to get lenght
 *  Return: Length of strlen
 */
int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
