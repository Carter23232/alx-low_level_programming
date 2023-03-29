#include "main.h"
/**
 * _strcmp - compares s1 and s2
 * @s1: lhs
 * @s2 : rhs
 *
 * Return: returns copied string
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = (int)strlen(s1), len_s2 = (int)strlen(s2), i;
	int len = (len_s1 > len_s2) ? len_s1 : len_s2;

	for (i = 0; i < len; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (0);
		}
	}
}
