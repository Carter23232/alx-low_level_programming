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

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
		++i;
	}
	return (NULL);
}
