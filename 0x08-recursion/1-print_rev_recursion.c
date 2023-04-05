#include "main.h"

/**
 *_ print_rev_recursion - prints a string
 * The string to be reversed
 * Return: nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
