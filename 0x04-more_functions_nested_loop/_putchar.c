#include <unistd.h>
#include "main.h"

/**
 * _putchar writes the character c to sdtou
 * @c: The character to print
 *
 * Return: on success 1.
 * on errors. -1 is return, and erroro is set apperantly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
