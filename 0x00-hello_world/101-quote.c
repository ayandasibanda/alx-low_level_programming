/**
 * main - Entry point
 *
 * Description: Prints a message to standard error using write function
 * Return: Always 1 (error)
 */

#include <unistd.h>

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 0;

	while (message[len] != '\0')
		len++;

	if (write(STDERR_FILENO, message, len) != len)
		return (1);

	return (1);
}

