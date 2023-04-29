#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Releases the linked
 * @h: A trace or pointer that takes the start nodes
 * Return: the lists of elements to be released
 */
size_t free_listint_safe(listint_t **h)
{
	size_t expanse = 0;
	int diverse;
	listint_t *temprory;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diverse = *h - (*h)->next;
		if (diverse > 0)
		{
			temprory = (*h)->next;
			free(*h);
			*h = temprory;
			expanse++;
		}
		else
		{
			free(*h);
			*h = NULL;
			expanse++;
			break;
		}
	}
	*h = NULL;
	return (expanse);
}
