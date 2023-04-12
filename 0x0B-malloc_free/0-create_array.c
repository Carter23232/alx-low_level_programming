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
	int i;

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
		for (i = 0; i < (int)size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}