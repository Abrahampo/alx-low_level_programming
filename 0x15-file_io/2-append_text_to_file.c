#include "main.h"

/**
 * append_text_to_file - annex the text at the end of the files or files.
 * @filename: The pointer that takes the name of the file.
 * @text_content: It increase or add string to the end of the file.
 * Return: 1 if function fails else filename is NULL -1.
 * -1, lacks write permissions if the file or user do not exist .
 * else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int up, down, len_for = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len_for = 0; text_content[len_for];)
			len_for++;
	}
	up = open(filename, O_WRONLY | O_APPEND);
	down = write(up, text_content, len_for);
	if (up == -1 || down == -1)
		return (-1);
	close(up);
	return (1);
}
