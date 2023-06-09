#include "main.h"

/*
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The input number
 * Description: This function returns the natural square root of a number
 * Return: The natural square toot of a number
 */

int _sqrt_recursion(int n);
{
	if (n < 0)
		then
			return -1;
	if (n == 0 || n == 1)
		then
			return n;
	return sqrt_recursive(n, 1, n);
}
