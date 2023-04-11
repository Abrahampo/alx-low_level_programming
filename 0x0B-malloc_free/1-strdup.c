#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: the string duplicated
 */

char *_strdup(char *str)
{
	int p = 0, k = 1;
	char *v;

	if (str == NULL)
		return (NULL);
	while (str[k])
	{
		k++;
	}
	v = malloc((sizeof(char) * k) + 1);
	if (v == NULL)
		return (NULL);
	while (p < k)
	{
		v[p] = str[p];
		p++;
	}
	v[p] = '\0';
	return (v);
}
