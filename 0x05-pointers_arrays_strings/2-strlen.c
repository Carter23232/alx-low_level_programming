#include "main.h"
/**
 *_strlen - gets the length of a string.
 * @s: variable to check
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
int strlen = 0;
while (s[strlen] != '\0')
{
	strlen++;
}
return (strlen);
}
