#include "main.h"

/**
 *  _strlen -  returns the length of a string
 *  @s: the command to get lenght
 *  Return: Length of strlen
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
