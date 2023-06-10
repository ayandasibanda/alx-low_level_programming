#include <stdio.h>

/**
 * main - Starting point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 * @printf: Prints the number of arguments
 * Description: This program prints the number of arguments passed into it
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return 0;
}

