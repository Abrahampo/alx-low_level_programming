#include "lists.h"
#include <stdio.h>
/**
 * free_listint - Release a linked list
 * @h :A pointer for the listint_t list to be released
 */
void free_listint(listint_t *head)
{
	listint_t *temprory;

	while (head)
	{
		temprory = head->next;
		free(head);
		head = temprory;
	}
}
