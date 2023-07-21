#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 * Return: 1 for uppercase character or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
