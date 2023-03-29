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
int s_size = (int) strlen(src), i;

if (n >= s_size)
{
	for (i = 0; i < s_size; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}
else
{
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
}
return (dest);
}
