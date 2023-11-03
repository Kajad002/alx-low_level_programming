#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array in the hash table.
 *
 * Return: A pointer to the newly created hash table.
 * If something went wrong, returns NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size < 1) return NULL; /* Invalid size */
	/* Attempt to allocate memory for the hash_table structure */
	if ((new_table = malloc(sizeof(hash_table_t))) == NULL)
		return NULL;
	/* Attempt to allocate memory for the table itself */
	if ((new_table->array = malloc(sizeof(void *) * size)) == NULL)
		return NULL;
	/* Initialize the elements of the array */
	for(i=0; i<size; i++) new_table->array[i] = NULL;

	/* Set the table's size */
	new_table->size = size;

	return (new_table);
}
