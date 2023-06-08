#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The input string.
 * Description: This program prints the length of a string
 * Return: The length of the string.
 * _strlen_recursion - Calculate the length of a string recursively
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	else
		return 1 + _strlen_recursion(s + 1);
}

