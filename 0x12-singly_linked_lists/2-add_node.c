#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a new nodes that are increased at the start of the linked
 * @head: A pointer that is double in the list_t 
 * @str: string for adding nodes
 * Return: elements that takes the address, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	unsigned int len = 0;

	while (str[len])
		len++;
	nn = malloc(sizeof(list_t));
	if (!nn)
		return (NULL);
	nn->str = strdup(str);
	nn->len = len;
	nn->next = (*head);
	(*head) = nn;
	return (*head);
}
