#include "search_algos.h"

/**
  * binary_search - This function searches for a specific value in a sorted
  *                 array of integers using the Binary Search algorithm.
  * @array: Pointer to the first element of the array.
  * @size: Number of elements in the array.
  * @value: Value to search for.
  *
  * Return: Index of the found value,
  *         or -1 if the value is not found or the array is NULL.
  *
  * Description: Prints the subarray being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
        size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

