#include "main.h"

/**
 *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *Return: ptr to concantated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = s1 ? strlen(s1) : 0;
int len2 = s2 ? strlen(s2) : 0;

char *result = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
    if (!s1 && !s2) {
        return NULL;
    }

    int len1 = s1 ? strlen(s1) : 0;
    int len2 = s2 ? strlen(s2) : 0;

    char *result = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

    if (!result) {
        return NULL;
    }

    if (len1 > 0) {
        memcpy(result, s1, len1);
    }

    if (len2 > 0) {
        memcpy(result + len1, s2, len2);
    }

    result[len1 + len2] = '\0';

    return result;
}
