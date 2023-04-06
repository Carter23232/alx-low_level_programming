#include "main.h"

int test(char *s, int size);

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s:string subjected to test
 *
 *Return: 1 if true 0 if false
 */
int is_palindrome(char *s)
{
	return (test(s, (int)strlen(s)));
}

/**
 * test - checks if a string is palindrome.
 * @s:the string
 * @size: size of string
 *
 * Return: returns 1 if true 0 otherwise
 */
int test(char *s, int size)
{
	if (size == 0 || size == 1)
	{
		return (1);
	}
	if (s[0] == s[size - 1])
	{
		return (test(s + 1, size - 2));
	}
	return (0);
}
