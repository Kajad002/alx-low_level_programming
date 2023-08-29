#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Pointer to the address of the head of the list
 *
 * This function iterates through the list, freeing each node as it goes.
 * It uses a temporary pointer to store the current node, so that it can
 * move to the next node before freeing the current node. After freeing
 * all nodes, it sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
