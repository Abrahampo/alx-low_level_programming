#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The characher to print
 *
 * Return: on success 1.
 * on error, 1- is returned, and is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
