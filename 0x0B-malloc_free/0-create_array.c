#include "main.h"

/**
 * create_array - creates array and initialise with char c.
 * @size: length of array
 * @c: characterto replace
 * Return: pointer to arrray
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(str, c, size);
	}
	return (str);
}
