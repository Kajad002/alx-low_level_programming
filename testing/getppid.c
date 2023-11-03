#include <stdio.h>
#include <unistd.h>

/**
 * main - ppid
 *
 * Return: Always 0;
 */
int main(void)
{
	printf("%d\n", getppid());
	return (0);
}
