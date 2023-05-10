#include "main.h"
#include<stdio.h>

/**
 * create_file - It is use to Creates a file.
 * @filename: This is a pointer that is use to point to the name to create file
 * @text_content: The pointer that takes a string to write a file.
 * Return: -1 if function fails
 * else 1.
 */

int create_file(const char *filename, char *text_content)
{
	int k, pp, y = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (y = 0; text_content[y];)
			y++;
	}
	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	pp = write(k, text_content, y);
	if (k == -1 || pp == -1)
		return (-1);
	close(k);
	return (1);
}
