#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n element to be copied from s2
 * Return: ptr to reserved mem whit concanated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *costr;
	size_t s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strnlen(s2, n);

	costr = malloc(s1_len + s2_len + 1);
	if (costr == NULL)
		return (NULL);

	memcpy(costr, s1, s1_len);
	memcpy(costr + s1_len, s2, s2_len);
	costr[s1_len + s2_len] = '\0';

	return (costr);
}
