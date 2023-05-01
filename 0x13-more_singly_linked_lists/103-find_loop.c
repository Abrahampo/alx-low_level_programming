#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - locates loop in the list
 * @h: list for searching
 * Return: location or address of nodes where the loop begins, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);
	while (low && quick && quick->next)
	{
		quick = quick->next->next;
		low = low->next;
		if (quick == low)
		{
			low = head;
			while (low != quick)
			{
				low = low->next;
				quick = quick->next;
			}
			return (quick);
		}
	}
	return (NULL);
}


