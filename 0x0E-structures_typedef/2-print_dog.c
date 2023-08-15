#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
		d = malloc(sizeof(struct dog));
		printf("(nil)");
		return;
	}

		printf("Name :%s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age :%.6f\n", d->age);
		printf("owner :%s\n", d->owner != NULL ? d->owner : "(nil)");
}
