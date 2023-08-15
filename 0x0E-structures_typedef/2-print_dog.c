#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  print_dog - function that prints a struct dog
 *  @d: pointer
 *  Description: function that prints properties of struct dog
 *  Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
