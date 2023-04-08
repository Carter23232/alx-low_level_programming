#include "main.h"
/**
 * _memset - fills mem ith const byte
 * @s: mem area add
 * @b: const byte
 * @n: n bytes
 * Return: returns a pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}
	return (s);
}
