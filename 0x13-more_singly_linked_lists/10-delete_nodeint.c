#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - traverses nodes in a linked list
 * @h: A pointer that takes the first elements of the linked list
 * @idx: A element of the node to b traversed
 * Return: 1 (Good), or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temprory = *head;
	listint_t *curr = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temprory);
		return (1);
	}
	while (k < index - 1)
	{
		if (!temprory || !(temprory->next))
			return (-1);
		temprory = temprory->next;
		k++;
	}
	curr = temprory->next;
	temprory->next = curr->next;
	free(curr);
	return (1);
}
