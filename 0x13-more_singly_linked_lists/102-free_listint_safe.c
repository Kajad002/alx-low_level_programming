#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * free_listint_safe - frees a listint_t list safely
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	
	if (h == NULL || *h == NULL)
		return (count);
	
	while (*h != NULL)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}
	*h = NULL;
	return (count);
}
