#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The input number.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 * sqrt_recursive - Helper function to perform the recursive calculation.
 *
 * Return: The natural square root of the number, or -1 if no natural square root exists.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return -1;

	if (n == 0 || n == 1)
	return n;

	return sqrt_recursive(n, 1, n);
}

int sqrt_recursive(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start <= end)
{
	if (mid * mid == n)
	return mid;
	else if (mid * mid > n)
	return sqrt_recursive(n, start, mid - 1);
	else
	return sqrt_recursive(n, mid + 1, end);
}

	return end;
