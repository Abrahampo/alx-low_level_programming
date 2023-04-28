#include "lists.h"

/**
 * pop_listint - Traverses of the head node
 * @head: A pointer that take the first elements
 * Return: The amount dat inside the elements that was traversed,
 * 0 if the list doni't have nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *temprory;
	int pro;

	if (!head || !*head)
		return (0);
	pro = (*head)->n;
	temprory = (*head)->next;
	free(*head);
	*head = temprory;
	return (pro);
}
