#include <stdio.h>
#include <stddef.h>
#include <strings.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: param
 * Return: returns umber of nodes
 */
size_t print_list(const list_t *h)
{
	size_t countNode = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		countNode++;
	}
	return (countNode);
}
