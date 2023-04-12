#include "main.h"
/**
  * argstostr -  concatenates all the arguments of your program.
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: pointer to a new string, or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	char *strs;
	int i = 0, j = 0, k = 0, size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		j = 0;
		i++;
	}
	strs = (char *)malloc((size * sizeof(char)) + ac + 1);
	if (strs == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				strs[k] = av[i][j];
				k++;
			}
			strs[k] = '\n';
			k++;
		}
	}
	strs[k] = '\0';
	return (strs);
}
