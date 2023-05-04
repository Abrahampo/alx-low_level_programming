#include "main.h"
#include <unistd.h>

/**
 * _putchar - takes character c to stdout
 * @c: The printed character
 * Return: just success 1.
 * maybe errors, -1 is returned, and erros is set precisely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
