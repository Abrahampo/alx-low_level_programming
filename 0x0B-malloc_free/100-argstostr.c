#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert the programs passed to the program to string
 * @ac: the argument count
 * @av: the argument vector
 * Return: ...
 */

char *argstostr(int ac, char **av)
{
	int hh = 0, o = 0, p = 0, q = 0;
	char *v;

	if (ac == 0 || av == NULL)
		return (NULL);
	while(o < ac)
	{
		while (av[o] [p])
		{
			hh++;
			p++;
		}
		p = 0;
		o++;
	}
	v = malloc((sizeof(char) * hh) + ac + 1);
	o = 0;
	while(av[o])
	{
		while (av[o] [p])
		{
			v[q] = av[o] [p];
			q++;
			p++;
		}
		v[q] = '\n';
		p = 0;
		q++;
		o++;
	}
	q++;
	v[q] = '\0';
	return (v);
}			
