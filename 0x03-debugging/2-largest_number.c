#include "main.h"

/**
 * largest_number - returns the largest if 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: thied integer
 * Return: largest number
 */

int largest_number(int  a, int b, int c)

{
	int largest;

	if (a >=  b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}
	return (largest);
}
