#include "main.h"

/*
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 * Description: This function returns the value of x raised to the power of y
 *
 * Return: Result of x raised to the power of y
 * if y is lower than 0, function returns -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return -1;
	else if (y == 0)
	return 1;
	else
	return x * _pow_recursion(x, y - 1);
}
