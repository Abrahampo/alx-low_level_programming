#include "main.h"

/**
 * print_lin - Draw a straigth line according to prameter
 * @n: The number o lines to draw
 * Retunr: empty
 */

void print_line(int n)

{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_puctchar(95);
		}
		_putchar('\n');
	}
}
