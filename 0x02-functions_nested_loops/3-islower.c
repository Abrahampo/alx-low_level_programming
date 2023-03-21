#include "main.h"

/**
 * _islower - checkes for lowercase cahracter
 * @c: Thee character to be checked
 * Return: 1 for lowercase or 0 for anyting else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
