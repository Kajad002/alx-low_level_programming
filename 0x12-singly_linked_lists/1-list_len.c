#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * list_len - function that returns the num of elements in a linked list_t list
 * @h: pointer parameter
 * Return: returns the number of element in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t countNode = 0;

	while (h != NULL)
	{
		countNode++;
		h = h->next;
	}
	return (countNode);
}
