#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - increase nodes at the end of a linked list
 * @h: A pointer to take the first elements
 * @n: Elements to insert.
 *
 * Return: A pointer to check the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *start;
	listint_t *new = *head;

	start = malloc(sizeof(listint_t));
	if (!start)
		return (NULL);
	start->n = n;
	start->next = NULL;
	if (*head == NULL)
	{
		*head = start;
		return (start);
	}
	while (new->next)
		new = new->next;
	new->next = start;
	return (start);
}
