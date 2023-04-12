#include "main.h"

/**
 *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *Return: ptr to concantated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	if (s1 != NULL && s2 == NULL)
	{
		concat = (char *)(malloc(strlen(s1) * sizeof(char) + 1));
		if (concat != NULL)
		{
			strcpy(concat, s1);
		}
	}
	else if (s1 == NULL)
	{
		concat = (char *)(malloc(strlen(s2) * sizeof(char) + 1));
		if (concat != NULL)
		{
			strcpy(concat, s2);
		}
	}
	else
	{
		concat = (char *)(malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1));
		if (concat != NULL)
		{
			strcpy(concat, s1);
			strcat(concat, s2);
		}
	}
	return (concat);
}
