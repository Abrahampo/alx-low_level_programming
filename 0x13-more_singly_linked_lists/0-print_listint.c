#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked lists
 * @h: A linked list of type listint_t to print the pointer
 * Return: the amount of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t pro = 0;

	while (h)
	{
		printf("%d\n", h->n);
		pro++;
		h = h->next;
	}
	return (pro);
}
