#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- The STANDARDOUTPUT the that read and print a text file.
 * @filename: The text file to be read
 * @letters: it reads the amonut or number of letter or letters
 * Return: The number bytes read or print w-
 * 0 for function fails else filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bb;
	ssize_t k;
	ssize_t z;
	ssize_t o;

	k = open(filename, O_RDONLY);
	if (k == -1)
		return (0);
	bb = malloc(sizeof(char) * letters);
	o = read(k, bb, letters);
	z = write(STDOUT_FILENO, bb, o);
	free(bb);
	close(k);
	return (z);
}
