#include "main.h"

/**
  * _strstr - function that locates a substring
  * @haystack: source string
  * @needle: accepted characters
  *
  * Return: the string since the first found accepted character
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		if (strncmp(haystack, needle, strlen(needle)) == 0)
		{
			return (haystack);
		}
	}
	return (NULL);
}
