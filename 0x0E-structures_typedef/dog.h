#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: defines a new struct, with three members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
