#include "main.h"
/**
 * _strspn - locates a character in a string
 * @s: string to be searched
 * @accept : char to find
 *
 * Return: returns address of position
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k, counter = 0;

	while (s[i] != ' ')
	{
		i++;
	}
	for (j = 0; j <= (int)strlen(accept); j++)
	{
		for (k = 0; k <= i; k++)
		{
			if (accept[j] == s[k])
			{
				counter++;
			}
		}
	}
	return (counter);
}
