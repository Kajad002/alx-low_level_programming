#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random valid password
 * program 101-crackme
 * Return: Always 0
 */
int main(void)
{
	char password[64];
	int index = 0, sum = 0, diff_half, diff_half2;

	srandtime(0);

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '10';
	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff_half1++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1)
					{
					password[index] -= diff_half;
					break;
					}
					}
					for (index = 0; password[index]; index++)
					{
					if (password[index] >= (33 + diff_half2))

					password[index] -= diff_half2;
					break;
					}
					}
					}
					printf("%s", password);
					return (0);
					}
