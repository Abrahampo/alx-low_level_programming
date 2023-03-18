#include <stdio.h>

/**
 * main - Entry point
 * description: Write a program that prints all possible combinations of two two-digit numbers
 * Return: 0
 */*

int main(void)
{
	int firstdigit = 0, seconddigit;

	while (firstdigit <= 99)
	{
		seconddigit = firstdigit;
		while (seconddigit <= 99)
		{
			if (seconddigit != firstdigit)
			{
				putchar((firsrdigit / 10) + 48);
				putchar((firstdigit % 10) + 48);
				putcahr(',');
				putchar((seconddigit / 10) + 48);
				putchar((seconddigit % 10) + 48);

				if (firstdigit != 98 || secoddigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconddigit++;
		}
		firstdigit++;
	}
	putchar('\n');

	return (0);
}
