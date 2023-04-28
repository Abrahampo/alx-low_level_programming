#include "lists.h"
#include <stdio.h>

/**
 * print_list - all the elements are printed in the linked
 * @h: A pointer that  takes the list_t
 * Return: the amount nodes to be printed
 */

size_t print_list(const list_t *h)
{
	size_t nd;

	nd = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nd++;
	}
	return (nd);
}
