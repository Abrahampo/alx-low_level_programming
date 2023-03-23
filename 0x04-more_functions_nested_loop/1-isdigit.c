#include "main.h"
/**
 * _sidigit - check if a character is a digti
 * @x: The number to be checked
 * Return: 1 for a chrarcter that will be a digit or 0 for any else
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}

