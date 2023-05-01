#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - prints the sum of all the data for the listint_t list
 * @h: the actual or first node in the linked list
 * Return: the sum or products
 */
int sum_listint(listint_t *head)
{
	int pro = 0;
	listint_t *temprory = head;

	while (temprory)
	{
		pro += temprory->n;
		temprory = temprory->next;
	}
	return (pro);
}
