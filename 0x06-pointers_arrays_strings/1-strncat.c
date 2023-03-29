#include "main.h"
/**
 * _strncat - appends a char to a string of words
 * @dest: destination
 * @src : word to add
 * @n: length of string to append from src
 * Return: returns modified string
 */
char *_strncat(char *dest, char *src, int n)
{
int d_size = (int) strlen(dest), s_size = (int) strlen(src), i, j;
if (n >= s_size)
{
	for (i = d_size, j = 0; i < (d_size + s_size); j++, i++)
	{
		dest[i] = src[j];
	}
}
else
{
	for (i = d_size, j = 0; i < (d_size + n); j++, i++)
	{
		dest[i] = src[j];
	}
}
return (dest);
}
