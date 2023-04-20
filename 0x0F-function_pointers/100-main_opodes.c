#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcodes of its own main function
 * @argc: Number of arguments passed to program
 * @argv: Array of pointers to arguments
 *
 * Return: 0 if successful, 1 if incorrect number of arguments,
 *         2 if negative number of bytes
 */
int main(int argc, char **argv)
{
        int num_bytes, i;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        num_bytes = atoi(argv[1]);

        if (num_bytes < 0)
        {
                printf("Error\n");
                return (2);
        }

        /* Print opcodes */
        unsigned char *opcode_ptr = (unsigned char *)main;
        for (i = 0; i < num_bytes; i++)
        {
                printf("%02x", *(opcode_ptr + i));
        }
        printf("\n");

        return (0);
}

