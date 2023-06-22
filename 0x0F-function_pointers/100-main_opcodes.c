#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @bytes: The number of bytes to print.
 *
 * Return: None.
 */
void print_opcodes(int bytes)
{
    int i;
    unsigned char *ptr = (unsigned char *)print_opcodes;

    for (i = 0; i < bytes; i++)
    {
        printf("%.2x", ptr[i]);

        if (i != bytes - 1)
            printf(" ");
    }

    printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect,
 *         or 2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
    int bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    print_opcodes(bytes);

    return 0;
}

