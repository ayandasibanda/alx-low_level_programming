#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character that will be printed
 *
 * Return: 1 if code is a success
 * If there is an error, -1 is returned
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

