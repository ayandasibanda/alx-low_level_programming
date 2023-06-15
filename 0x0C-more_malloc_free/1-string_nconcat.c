#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to the concatenated string
 *         If the function fails, it returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1, len2, concat_len;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    concat_len = len1 + n + 1;

    concat = malloc(sizeof(char) * concat_len);
    if (concat == NULL)
        return NULL;

    strncpy(concat, s1, len1);
    strncpy(concat + len1, s2, n);
    concat[concat_len - 1] = '\0';

    return concat;
}

