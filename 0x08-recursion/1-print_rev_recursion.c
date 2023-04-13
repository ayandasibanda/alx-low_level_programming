#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse, using recursion
 * @s: The string to print in reverse
 * Description: This function prints a string in reverse
 * _print_rev_recursion: Recursively call function with next character
 * Return: 0, indicating success
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

