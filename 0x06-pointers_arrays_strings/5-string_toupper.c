#include "main.h"
/**
  * string_toupper - changes lowecase to uppercase.
  * @a: character to cahnge
  *
  * Return: returns modified string
*/
char *string_toupper(char *a)
{
	int i;

	for (i = 0; i < (int)strlen(a); i++)
	{
		if (a[i] >= 97 && a[i] < 122)
		{
			a[i] -= 32;
		}
	}
	return (a);
}
