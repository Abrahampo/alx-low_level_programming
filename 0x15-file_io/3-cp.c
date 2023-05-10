#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - The Allocation of 1024 bytes for buffering.
 * @file: The chararacter that store the name of file for buffering.
 * Return: A new pointer that is use to allocate a buffer.
 */

char *create_buffer(char *file)
{
	char *bb;

	bb = malloc(sizeof(char) * 1024);
	if (bb == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (bb);
}

/**
 * close_file - The file descriptor closes or lack.
 * @fd: It lacks or closes the descriptor of a file(s)
 */

void close_file(int fd)
{
	int andy;

	andy = close(fd);
	if (andy == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - The contents or content of a file is being copied to another file.
 * @argc: The amount of arguments being supplied.
 * @argv: The pointers that takes the arguments of an array.
 * Return: 0 for success
 * Description: -exit code 97 check or count the argu if is wrong.
 * -exit code 98 if file_from, do not exist or can't be see.
 * The -exit code 99 file_to can't be created or written.
 * The  exit code 100 for both file_to or file_from can't be closed.
 */

int main(int argc, char *argv[])
{
	int go, agree, k, yy;
	char *bb;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bb = create_buffer(argv[2]);
	go = open(argv[1], O_RDONLY);
	k = read(go, bb, 1024);
	agree = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (go == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(bb);
			exit(98);
		}
		yy = write(agree, bb, k);
		if (agree == -1 || yy == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(bb);
			exit(99);
		}
		k = read(go, bb, 1024);
		agree = open(argv[2], O_WRONLY | O_APPEND);
	} while (k > 0);
	free(bb);
	close_file(go);
	close_file(agree);
	return (0);
}
