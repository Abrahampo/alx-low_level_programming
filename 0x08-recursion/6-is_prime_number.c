#include "main.h"
#include <stdio.h>

int ckeck_prime(int n, int i);

/**
 * is_prime_number - Returns if a number is prime
 * @n: the number to be ckecked
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * is_prime_number - Returns if a number is prime
 * @n: the number to be ckecked
 * Return: 1 for prime 0r 0 composite
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
