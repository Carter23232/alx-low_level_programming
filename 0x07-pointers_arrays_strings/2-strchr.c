#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c : char to find
 *
 * Return: returns address of position
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (i <= (int)strlen(s))
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		i++;
	}
	return (NULL);
}
