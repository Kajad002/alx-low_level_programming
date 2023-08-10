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
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	size_t concat_len = (len1 < n) ? len1 : n;

	char *result = (char *)calloc(concat_len + len2 + 1, sizeof(char));

	if (result == NULL)
	{
		perror("MEmory Allocation Failed");
		exit(EXIT_FAILURE);
	}
	strncpy(result, s1, concat_len);
	strncat(result, s2, len2);

	return (result);
}
