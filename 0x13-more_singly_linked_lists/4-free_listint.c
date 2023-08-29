#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * This function iterates through the list, freeing each node as it goes.
 * It uses a temporary pointer to store the current node, so that it can
 * move to the next node before freeing the current node.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
