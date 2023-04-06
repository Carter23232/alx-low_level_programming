#include "main.h"

int cmp(char *s1, char *s2);
/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int wildcmp(char *s1, char *s2)
{
	return (cmp(s1, s2));
}

/**
  * cmp - compares two strings
  * @s1: string 1
  *@s2: second string
  * Return: 1 if matches and 0 if not
  */
int cmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (cmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (cmp(s1, s2 + 1) || cmp(s1 + 1, s2));
	}
	return (0);
}
