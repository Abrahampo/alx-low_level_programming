#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings of any size
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 * Return: the two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int k = 0, l = 0, m = 0, n = 0;
	char *v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k])
		k++;
	while (s2[l])
		l++;
	n = k + l;
	v = malloc((sizeof(char) * n) + 1);
	if (v == NULL)
		return (NULL);
	l = 0;
	while (m < n)
	{
		if (m <= k)
			v[m] = s1[m];
		if (m >= k)
		{
			v[m] = s2[l];
			l++;
		}
		m++;
	}
	v[m] = '\0';
	return (v);
}
