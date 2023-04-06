#include "main.h"

int cmp(char *s, int i);

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s:string subjected to test
 *
 *Return: 1 if true 0 if false
 */
int is_palindrome(char *s)
{
	return (cmp(s, 1));
}

/**
 * cmp- checks if a string is palindrome.
 * @s:the string
 * @i:iterator
 *
 * Return: returns 1 if true 0 otherwise
 */
int cmp(char *s, int i)
{
	if (*s != s[(int)strlen(s) - i])
	{
		return (0);
	}
	if (*s != '\0')
	{
		return (cmp(s + 1, i + 1));
	}
	return (1);
}
