#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src : word to add
 * @n: length to copy
 * Return: returns pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
