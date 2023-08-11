#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * validateInput - validates inputs
 * @input: the input digit
 * Return: (1);
 */
int validateInput(char *input)
{
	while (*input)
	{
		if (!isdigit(*input))
		{
			exit(98);
		}
		input++;
	}
	return (1);
}
/**
 * multiplyStrings - multiplies two positive numbers.
 * @num1: input parameter
 * @num2: second input parameter
 * Return: 98 Error
 */
char *multiplyStrings(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int totalLen = len1 + len2;
	char *result = (char *)malloc(totalLen + 1);
	int i, j;
	int temp;
	int carry;

	if (!result)
	{
		exit(98);
	}

	for (i = 0; i < totalLen; i++)
	{
		result[i] = '0';
	}
	result[totalLen] = '\0';

	for (i = len1 - 1; i >= 0; j--)
	{
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			temp = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;

			carry = temp / 10;
			result[i + j + 1] = (temp % 10) + '0';
		}
		result[i] += carry;
	}
	return (result);
}
/**
 * main - calls other functions
 * @argc: argument c
 * @argv: argument vector
 * Return:0 success
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	char *result = multiplyStrings(num1, num2);

	if (argc != 3)
	{
		return (98);
	}
	if (!validateInput(argv[1]) || !validateInput(argv[2]))
	{
		return (98);
	}
	printf("%s\n", result);
	free(result);
	return (0);
}
