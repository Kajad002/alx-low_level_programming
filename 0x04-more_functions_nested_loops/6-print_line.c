#include "main.h"
/**
 *  print_line - print lines
 *  @n:The number of times the character would be printed
 *
 *  Return:0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
