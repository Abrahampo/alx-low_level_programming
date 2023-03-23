#include "main.h"

/**
 * print_traingle - prints a traingle of square according parameter
 * @size: The size of the squre traingle
 * RETURN: empty
 */

void print_traingle(int size)

{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for  (y = size - x; y > 1; y--)
			{
				_putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
