#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list and returns
 *               the head node's data
 * @head: Pointer to the address of the head of the list
 *
 * Return: The head node's data (n), or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (n);
}
