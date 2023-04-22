#include "main.h"

/**
 * _isupper - uppercase characters
 * @c: char to check
 *
 * Return: 1 if c is uppercase, returns 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

