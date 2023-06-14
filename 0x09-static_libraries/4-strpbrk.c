#include "main.h"

/**
 * _strpbrk - Entry point, searches a string for any of a set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the characters to search for
 *
 * Return: Pointer to the first occurrence of any character from 'accept' in 's',
 *         or 0 if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}

