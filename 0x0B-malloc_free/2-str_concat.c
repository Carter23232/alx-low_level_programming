#include "main.h"

/**
 *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *Return: ptr to concantated string
 */
char *str_concat(char *s1, char *s2)
{
    char *s, *p;
    int i, j;

    i = j = 0;

    while (s1[i]) {
        ++i;
    }

    while (s2[j]) {
        ++j;
    }

    s = (char*) malloc(i + j + 1);
    if (!s) {
        return NULL;
    }

    p = s;
    while (*s1) {
        *p++ = *s1++;
    }

    while ((*p++ = *s2++)) {}

    return s;
}
