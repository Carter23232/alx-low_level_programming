#include "main.h"
/**
  * rot13 - encode a string with rot13.
  * @a: character to cahnge
  *
  * Return: returns modified string
*/
char *rot13(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >= 65 && a[i] <= 90))
		{
			if ((a[i] + 13) <= 90)
			{
				a[i] += 13;
			}
			else
			{
				a[i] = 64 + ((a[i] + 13) - 90);
			}
		}
		if ((a[i] >= 97 && a[i] <= 122))
		{
			if ((a[i] + 13) <= 122)
			{
				a[i] += 13;
			}
			else
			{
				a[i] = 96 + ((a[i] + 13) - 122);
			}
		}
	}
	return (a);
}
