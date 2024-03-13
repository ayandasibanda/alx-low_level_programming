#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - Searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * This function iterates through each element of the array
 * to find the desired value using the Linear Search algorithm.
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
        size_t i = 0;

        // Check if the array is valid or empty
        if (!array || size == 0)
                return (-1);

        // Iterate through each element of the array
        while (i < size)
        {
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);

                // Check if the current element matches the desired value
                if (array[i] == value)
                        return (i);

                // Move to the next element
                i++;
        }

        // Value not found in the array
        return (-1);
}

