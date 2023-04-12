#include "main.h"

/**
 *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *Return: ptr to concantated string
 */
char *str_concat(char *s1, char *s2)
{
	char *constr;

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	constr = (char *)(malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1));
	if (constr != NULL)
	{
		strcpy(constr, s1);
		strcat(constr, s2);
		return (constr);
	}
	if (s1 != NULL)
	{
		constr = (char *)(malloc(strlen(s1) * sizeof(char) + 1));
		if (constr != NULL)
		{
			strcpy(constr, s1);
			return (constr);
		}
		else
		{
			return (NULL);
		}
	}
	else if (s2 != NULL)
	{
		constr = (char *)(malloc(strlen(s2) * sizeof(char) + 1));
		if (constr != NULL)
		{
			strcpy(constr, s2);
			return (constr);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
