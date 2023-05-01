#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - Releases a linked list.
 * @h: A pointer to take the listint_t list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temprory;

	if (head == NULL)
		return;
	while (*head)
	{
		temprory = (*head)->next;
		free(*head);
		*head = temprory;
	}
	*head = NULL;
}

