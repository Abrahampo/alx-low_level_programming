#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the numbers of element into a linked lists
 * @h: linked list of type listint_t to traverse or delete
 * Return: The amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t pro = 0;

	while (h)
	{
		pro++;
		h = h->next;
	}
	return (pro);
}
