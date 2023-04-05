#include "main.h"

/**
 * _strlen_recursion - returns the length of a string 
 * @s: the string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparating - compares each character of the string.
 * @s: string
 * @num1: smallest integer
 * @num2: biggest integer.
 * Return: .
 */

int comparating(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		return (0 + comparating(s, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparating(s, 0, is_strlen_recursion(s) - 1));
}
