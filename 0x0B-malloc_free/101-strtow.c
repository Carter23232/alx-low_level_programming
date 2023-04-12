#include "main.h"

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to count the words of.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && str[i] != ' ')
			count++;
		while (str[i] && str[i] != ' ')
			i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str is NULL, empty, or a memory allocation failure occurs - NULL.
 * Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, wc;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	while (i < wc)
	{
		while (*str == ' ')
			str++;

		len = 0;
		while (str[len] && str[len] != ' ')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			while (--i >= 0)
				free(words[i]);
			free(words);
			return (NULL);
		}

		for (j = 0, k = 0; j < len; j++, k++)
			words[i][k] = str[j];
		words[i][k] = '\0';

		i++;
		str += len;
	}

	words[i] = NULL;

	return (words);
}
