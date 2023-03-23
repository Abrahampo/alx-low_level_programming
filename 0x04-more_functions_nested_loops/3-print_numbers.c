#include "main.h"

/**
 * print_number - prints a number from 0 up to 9
 * Return: void
 */

void print_number(void)

{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
