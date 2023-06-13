#include "main.h"
#include <stdlib.h>

/**
 * str_concat - gets ends of input and adds them together
 * @s1: first string
 * @s2: second string
 *
 * Return: concat of s1 & s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j <= len2; j++)
		concat[i + j] = s2[j];

	return (concat);
}

