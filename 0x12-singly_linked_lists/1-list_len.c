#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the numbers of elements to be returned in the list
 * @h: A pointer that takes the list_t list
 * Return: elements that takes the list
 */
size_t list_len(const list_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}
