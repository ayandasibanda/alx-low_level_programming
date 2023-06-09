#include "main.h"

/*
 * factorial - This function returns the factorial of a number
 * @n: The number used to calculate the factorial of
 * Description: This function returns the factorial of a number
 * Return: The factorial of n, if n is lower than 0
 * the function should return 0 to indicate an error.
 * Result: The factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
		return -1;

	if (n == 0)
		return 1;

	return (n * factorial(n - 1));
}

