#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @...: variadic arguments
 * @format: string containing format specifiers
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;

	unsigned int i = 0;
	char *str;
 	char c;
	int num;
	float f;
	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
		}
		i++;
		if (format[i] != '\0')
		{
			printf(", ");
		}
	}
	va_end(args);
	printf("\n");
}
