#include "main.h"
#include <stdio.h>

/**
 * strspn - Entry point
 * @s: input
 * @accept: input
 * Return: just 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int  k, p, value, check;

	value = 0;
	for (k = 0; s [k] != '\0'; k++)	
	{
		check = 0;

		for (p = 0; accept[p] != '\0'; p++)
		{
			if (accept[p] == s[k])
			{
				value++;
				check = 1;
			}
		}
		if (ckeck == 0)
