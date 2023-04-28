#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - puts new node into linked list,
 * in the a precise positions
 * @head: A pointer to take the first node
 * @idx:sufix or index where the new nodes are added
 * @n: element to add in the new node
 * Return: A pointer to take the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *start;
	listint_t *temprory = *head;

	start = malloc(sizeof(listint_t));
	if (!start || !head)
		return (NULL);
	start->n = n;
	start->next = NULL;
	if (idx == 0)
	{
		start->next = *head;
		*head = start;
		return (start);
	}
	for (k = 0; temprory && k < idx; k++)
	{
		if (k == idx - 1)
		{
			start->next = temprory->next;
			start->next = start;
			return (start);
		}
		else
			temprory = temprory->next;
	}
	return (NULL);
}
