#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Entry point
 * @a: input
 * @size: input
 * Return: just (Success)
 */

void print_diagsums(int *a, int size)
{
	int k, n, pro1 = 0, pro2 = 0;

	for (k = 0;k <= (size * size); k = k + size + 1)
		pro1 = pro1 + a[k];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		pro2 = pro2 + a[n];
	printf("%d, %d\n", pro1, pro2);
}
