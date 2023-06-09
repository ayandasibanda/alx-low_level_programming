#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return 0;

	return check_prime(n, n - 1);
}

/**
 * check_prime - Recursive helper function to check if a number is prime.
 * @n: The number to check.
 * @div: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int div)
{
	if (div == 1)
		return 1;

	if (n % div == 0)
		return 0;

	return check_prime(n, div - 1);
}

