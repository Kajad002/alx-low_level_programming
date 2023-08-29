#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: the head pointer
 *
 * Return: Null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	
	return (NULL);
}
