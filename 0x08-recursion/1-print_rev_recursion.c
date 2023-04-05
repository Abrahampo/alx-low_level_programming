#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse
 * The string in to reverse
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
