#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: A pointer to the result as a string, or NULL on failure
 */
char *multiply(char *num1, char *num2)
{
    int len1, len2, i, j, product, carry;
    int *result;
    char *mul;

    len1 = strlen(num1);
    len2 = strlen(num2);
    result = calloc(len1 + len2, sizeof(int));
    if (result == NULL)
        return NULL;

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            product = (num1[i] - '0') * (num2[j] - '0');
            carry = product / 10;
            product %= 10;
            result[i + j + 1] += product;
            if (result[i + j + 1] > 9)
            {
                result[i + j + 1] %= 10;
                result[i + j] += carry;
            }
            else
            {
                result[i + j] += carry;
            }
        }
    }

    mul = malloc((len1 + len2 + 1) * sizeof(char));
    if (mul == NULL)
    {
        free(result);
        return NULL;
    }

    for (i = 0; i < len1 + len2; i++)
        mul[i] = result[i] + '0';
    mul[i] = '\0';

    free(result);
    return mul;
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
    char *num1, *num2, *result;
    int i;

    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    num1 = argv[1];
    num2 = argv[2];

    for (i = 0; num1[i] != '\0'; i++)
    {
        if (!_isdigit(num1[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    for (i = 0; num2[i] != '\0'; i++)
    {
        if (!_isdigit(num2[i]))
        {
            printf("Error\n");
            return 98;
        }
    }

    result = multiply(num1, num2);
    if (result == NULL)
    {
        printf("Error\n");
        return 98;
    }

    printf("%s\n", result);
    free(result);

    return 0;
}

