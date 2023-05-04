#include "main.h"

/**
 * get_endianness - the  machine checks if is little or endian
 * Return: 0 for more or big, 1 samll or little
 */

int get_endianness(void)
{
	unsigned int love_is_coding = 1;
	char *car = (char *) &love_is_coding;

	return (*car);
}
