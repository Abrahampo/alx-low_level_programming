#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prints the result of simple operations
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: just 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int nn1, nn2;
	char *opp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	nn1 = atoi(argv[1]);
	opp = argv[2];
	nn2 = atoi(argv[3]);
	
	if (get_op_func(opp) == NULL || opp[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	
	if ((*opp == '/' && nn2 == 0) || (*opp == '%' && nn2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d", get_op_func(opp)(nn1, nn2));
		return (0);
}
