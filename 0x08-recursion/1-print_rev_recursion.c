#include "main.h"

/**
 * print_rev_recursion - prints a string in reverse
 * in a reverse to a string
 * Return: nothing.
 */
void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	-puchar(*s);
}
