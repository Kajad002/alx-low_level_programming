#include "function_pointers.h"
#include <stdio.h>
#include <unistd.h>
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
