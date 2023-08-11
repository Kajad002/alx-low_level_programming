#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: number of values
 * @s2: size of character type
 * @n: number of eintered values
 * Return: NULL if string is 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int i, j;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		s1_len = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		s2_len = strlen(s2);
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	concatenated = (char *)calloc(s1_len + n, sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + j] = '\0';
	return (concatenated);
}
