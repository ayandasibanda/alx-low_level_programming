#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte c
 * @s: Pointer to the memory area to be filled
 * @c: Value to be set (treated as an unsigned char)
 * @n: Number of bytes that will be changed
 *
 * Return: Pointer to the filled memory area (s)
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = c;

	return s;
}

