#include "dog.h"
#include <stdio.h>

/**
 *  print_dog - function that prints a struct dog
 *  @d: pointer
 *  Description: 
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name :%s\n",
