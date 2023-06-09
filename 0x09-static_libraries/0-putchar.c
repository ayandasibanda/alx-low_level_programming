#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be printed out
 * 
 * Return: On success, returns the character will be printed
 *         On error, returns -1
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

