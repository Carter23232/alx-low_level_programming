#include "main.h"

/**
 *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *Return: ptr to concantated string
 */
char *str_concat(char *s1, char *s2)
{
    int s1_length = 0, s2_length = 0;
    char *result, *p;

    if (s1 != NULL) {
        s1_length = strlen(s1);
    }

    if (s2 != NULL) {
        s2_length = strlen(s2);
    }

    result = (char *)malloc(s1_length + s2_length + 1);

    if (result == NULL) {
        return NULL;
    }

    p = result;

    while (s1 != NULL && *s1 != '\0') {
        *p++ = *s1++;
    }

    while (s2 != NULL && *s2 != '\0') {
        *p++ = *s2++;
    }

    *p = '\0';

    return result;
}

