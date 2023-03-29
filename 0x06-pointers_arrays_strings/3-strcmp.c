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
	int len_s1 = (int)strlen(s1), len_s2 = (int)strlen(s2);
	int i, s1sum = 0, s2sum = 0;

	for (i = 0; i < len_s1; i++)
	{
		s1sum += (int)s1[i];
	}
	for (i = 0; i < len_s2; i++)
	{
		s2sum += (int)s2[i];
	}
	if (s1sum > s2sum)
	{
		return (s1sum - s2sum);
	}
	else if (s1sum == s2sum)
	{
		return (0);
	}
	else
	{
		return (s1sum - s2sum);
	}
}
