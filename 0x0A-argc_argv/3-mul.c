#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prinnts multiplication of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: just zero
 */

int main(int argc, char *argv[])
{
	int nn1 = 0, nn2 = 0;

	if (argc == 3)
	{
		nn1 = atoi(argv[1]);
		nn2 = atoi(argv[2]);
		printf("%d\n", nn1 *  nn2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
