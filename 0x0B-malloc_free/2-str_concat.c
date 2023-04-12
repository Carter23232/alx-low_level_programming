#include "main.h"

/**
 *str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *Return: ptr to concantated string
 */
char* str_concat(char* s1, char* s2)
{
    if (!s1 && !s2) {
        return NULL;
    }

    char* constr;
    const int s1_len = s1 ? strlen(s1) : 0;
    const int s2_len = s2 ? strlen(s2) : 0;

    if (!s1 || !s2) {
        constr = (char*) malloc((s1_len + s2_len + 1) * sizeof(char));
    } else {
        constr = (char*) malloc((s1_len + s2_len + 1) * sizeof(char));
        if (!constr) {
            return NULL;
        }
        strcpy(constr, s1);
        strcat(constr, s2);
    }

    return constr;
}
