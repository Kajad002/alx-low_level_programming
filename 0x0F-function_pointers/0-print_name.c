#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_to_console - function that prints to console
 * @name: the name to be printed
 *
 */
void print_to_console(char *name)
{
	while (*name != '\0')
	{
		putchar(*name);
		name++;
	}
	putchar('\n');
}
/**
 * print_name - function that prints a name
 * @name: function arguement
 * @f: function taken as argument
 * Description: this pointer to function, takes in two argument, one of the,
 * argument is a functon.
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
