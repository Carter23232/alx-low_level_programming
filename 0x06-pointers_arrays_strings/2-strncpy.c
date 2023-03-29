#include "main.h"
/**
 * _strncpy - copies a char from src to a dest
 * @dest: destination
 * @src : source
 * @n: length of string to copy from src
 * Return: returns copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
int s_size = (int) strlen(src), i, j;

if (n >= s_size)
{
	for (i = 0, j = 0; i < s_size; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
}
else
{
	for (i = 0, j = 0; i < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
}
return (dest);
}
