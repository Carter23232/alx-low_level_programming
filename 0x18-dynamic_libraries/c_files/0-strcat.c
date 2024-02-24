#include "main.h"
/**
 * _strcat - appends a char to a string of words
 * @dest: destination
 * @src : word to add
 * Return: returns modified string
 */
char *_strcat(char *dest, char *src)
{
int d_size = (int) strlen(dest), s_size = (int) strlen(src), i, j;
for (i = d_size, j = 0; i < (d_size + s_size); j++, i++)
{
	dest[i] = src[j];
}
return (dest);
}
