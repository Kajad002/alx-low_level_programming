#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @name:first member
 * @age:second member
 * @owner:third member
 * @d:pointer
 *
 * Description: a function that initializes a variable of type struct dog,
 * which takes three arguments
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
