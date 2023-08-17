#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: the number of command line arguments.
 * @argv: an array of strings containing the cl arguments
 *
 * Return: 0 on success, 1 if argument are incorrect
 * and 2 if bytes are negative
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *main_ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
		printf("%02x ", main_ptr[i]);
	printf("\n");

	return (0);
}
