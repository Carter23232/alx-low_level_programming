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
			a[i] = ((a[i] - 65 + 13) % 26) + 65;
			break;
		}
		a[i] = ((a[i] - 97 + 13) % 26) + 97;
	}
	return (a);
}
