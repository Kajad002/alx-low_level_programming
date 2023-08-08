#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * @str: character string
 * Return: ddd
 */
char *_strdup(char *str)
{
	char *ddd;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	ddd = malloc(sizeof(char) * (i + 1));

	if (ddd == NULL)
	return (NULL);

	for (r = 0; str[r]; r++)
		ddd[r] = str[r];

	return (ddd);
}
