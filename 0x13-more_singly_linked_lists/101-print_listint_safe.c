#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - enumerates number of individual nodes
 * for the looped the linked list.
 * @head: pointers that takes the start of the listint_t to compute.
 * Return: check If the list is not looped - 0.
 * Otherwise - the element of individual nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cooter, *creep;
	size_t k = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	cooter = head->next;
	creep = (head->next)->next;
	while (creep)
	{
		if (cooter == creep)
		{
			cooter = head;
			while (cooter != creep)
			{
				k++;
				cooter = cooter->next;
				creep = creep->next;
			}
			cooter = cooter->next;
			while (cooter != creep)
			{
				k++;
				cooter = cooter->next;
			}
			return (k);
		}
		cooter = cooter->next;
		creep = (creep->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - it output the listint_t list freely.
 * @head: pointers that takes the start listint_t list.
 * Return: it returns the element of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t knots, k = 0;

	knots = looped_listint_len(head);
	if (knots == 0)
	{
		for (; head != NULL; knots++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (k = 0; k < knots; k++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (knots);
}

