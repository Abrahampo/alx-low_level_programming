#include "main.h"

/**
 * _abs - ocmputes the absolute value of an integer.
 * @c: The number to be computed
 * Return: Absolute value of number or zero in c programming
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
