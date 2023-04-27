#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>


/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list.
 * @str: string to put in the new node
 * Return: address of the new element or head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pap;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	pap = malloc(sizeof(list_t));
	if (!pap)
		return (NULL);
	pap->str = strdup(str);
	pap->len = len;
	pap->next = NULL;
	if (*head == NULL)
	{
		*head = pap;
		return (pap);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = pap;
	return (pap);
}
