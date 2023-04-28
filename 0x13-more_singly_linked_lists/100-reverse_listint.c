#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - rverses elments in a linked list
 * @head: A pointer that takes the first nodes
 * Return: A pointer that takes first node of the start or new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *begin = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = begin;
		begin = *head;
		*head = next;
	}
	*head = begin;
	return (*head);
}
