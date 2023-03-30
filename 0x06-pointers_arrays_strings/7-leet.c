#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
  * leet - encode a string to 1337.
  * @a: character to cahnge
  *
  * Return: returns modified string
*/
char *leet(char *a)
{
	char *let = "aeotl";
	int num[] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; i < (int)strlen(let); i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (let[i] == a[j] || toupper(let[i]) == a[j])
			{
				a[j] = num[i];
			}
		}
	}
	return (a);
}
