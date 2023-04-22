#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to execute on each element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
{
	for (i = 0; i < size; i++)
	{
	(*action)(array[i]);
	}
}
}

