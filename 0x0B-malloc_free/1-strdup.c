#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory, which
 *          contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: ptr to string copied
 */
char *_strdup(char *str)
{
	char *_strcpy;

	if (str == NULL)
	{
		return (NULL);
	}
	_strcpy = (char *)(malloc(strlen(str) * sizeof(char) + 1));
	if (_strcpy != NULL)
	{
		strcpy(_strcpy, str);
		return (_strcpy);
	}
	return (NULL);
}
