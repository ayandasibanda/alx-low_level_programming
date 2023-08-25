#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet letter
 * @c: The character to be checked
 *
 * Return: 1 if the character is an alphabet letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
