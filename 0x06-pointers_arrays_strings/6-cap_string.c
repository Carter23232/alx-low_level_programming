#include "main.h"
/**
 * cap_string - capitalise each word
 * @a: iput
 *
 *
 * Return: returns modified string
 */
char *cap_string(char *a)
{
	char *symbols = " \t\n,;.!?\"(){}";
	int i, j;

	if (a[0] >= 97 && a[0] <= 122)
	{
		a[0] -= 32;
	}
	for (i = 0; i < (int)strlen(symbols); i++)
	{
		for (j = 0; j < (int)strlen(a); j++)
		{
			if (symbols[i] == a[j])
			{
				if (a[j + 1] >= 97 && a[j + 1] <= 122)
				{
					a[j + 1] -= 32;
				}
				j++;
			}
		}
	}
	return (a);
}
