#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number to calculate the factorial
 *
 * Return: integer values
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if  (n <= 1)
		return (1);
	return (n * fac(n - 1));
}
