#include "main.h"

/**
 * print_number - prints a number from 0 up to 9
 * Return: void
 */

void print_number(void)

{
	int z;

	for (z = 0; z <= 9; z++)
	{
		_putchar(z + '0');
	}
	_putchar('\n');
}
