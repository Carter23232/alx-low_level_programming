#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n element to be copied from s2
 * Return: ptr to reserved mem whit concanated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *costr;

	if (s1 == NULL && s2 == NULL)
	{
		costr = malloc(sizeof(*costr));
		if (costr != NULL)
		{
			strcpy(costr, "");
		}
		return (costr);
	}
	if (s1 == NULL)
	{
		costr = malloc(sizeof(*costr));
		strcpy(costr, "");
	}
	else
	{
		costr = malloc(sizeof(*costr) * strlen(s1));
		if (costr != NULL)
		{
			strcpy(costr, s1);
		}
		else
		{
			return (NULL);
		}
	}
	if (s2 == NULL)
	{
		costr = realloc(costr, sizeof(*costr) * strlen(costr) + 1 + 1);
		if (costr == NULL)
		{
			return (NULL);
		}
		strcat(costr, "");
	}
	else
	{
		if (n >= strlen(s2))
		{
			costr = realloc(costr, sizeof(*costr) * strlen(s2) + 1);
			if (costr == NULL)
			{
				return (NULL);
			}
			else
			{
				strcat(costr, s2);
			}
		}
		else
		{
			costr = realloc(costr, sizeof(costr) * n + 1);
			 if (costr == NULL)
			 {
				 return (NULL);
			 }
			 else
			 {
				 strncat(costr, s2, n);
			 }

		}
	}
	strcat(costr, "\n");
	return (costr);
}
