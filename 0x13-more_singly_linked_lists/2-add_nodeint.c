#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - increase or adds  new node at the start
 * @head: A pointer to take the address of the first node
 * @n: data or elem to insert into the new node
 *
 * Return:A condition to check a pointer, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	start = malloc(sizeof(listint_t));
	if (!start)
		return (NULL);
	start->n = n;
	start->next = *head;
	*head = start;
	return (start);
}

