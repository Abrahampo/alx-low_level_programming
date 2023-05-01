#include "lists.h"

/**
 * get_nodeint_at_index - Returns  nodes at the index level its linked list
 * @h: first emelemt of the linked list
 * @index: index  nodes to be returned
 * Return: A pointer that take the node we're searching, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *temprory = head;

	while (temprory && k < index)
	{
		temprory = temprory->next;
		k++;
	}
	return (temprory ? temprory : NULL);
}
