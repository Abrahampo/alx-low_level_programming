#include "main.h"

/**
 * wildcmp - compares two strirngs.
 * @su1: string 1.
 * @su2: string 2. it contain a * s as special characters.
 * Return: 1 if they are in identical, 0 if not
 */

int wildcmp(char *su1, char *su2)
{
	if (*su2 == '*' && *(su2 + 1) != '\0' && *su1 == '\0')
		return (0);
	if (*su1 == '\0' && su2 == '\0')
		return (1);
	if (*su1 == *su2)
		return (wildcmp(su1 + 1, su2 + 1));
	if (*su2 == '*')
		return (wildcmp(su1, su2 + 2) || wildcmp(su1 + 1, su2));
	return (0);
}
