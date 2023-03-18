#include <stdio.h>
#include <stdli.h>
#include <time.h>

/**
 * main - entering point
 *
 * Return: just 0(success)
 */
int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= 'f'; d++)
	putchar(d);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	printf('\n');

	return (0);
