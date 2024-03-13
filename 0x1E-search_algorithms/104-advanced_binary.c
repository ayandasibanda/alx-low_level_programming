#include "search_algos.h"

/**
  * advanced_binary_recursive - This function recursively searches for a specific value
  *                             in a sorted array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
        size_t i;

        // Base case: If the search range is invalid
        if (right < left)
                return (-1);

        // Print the current [sub]array being searched
        printf("Searching in array: ");
        for (i = left; i < right; i++)
                printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        // Calculate the middle index
        i = left + (right - left) / 2;

        // Check if the value is found and it is the first occurrence
        if (array[i] == value && (i == left || array[i - 1] != value))
                return (i);

        // Recursive search in the left or right [sub]array
        if (array[i] >= value)
                return (advanced_binary_recursive(array, left, i, value));
        return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
  * advanced_binary - This function searches for a specific value
  *                   in a sorted array of integers using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index of the first occurrence of the value.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
        // Check if the array is NULL or empty
        if (array == NULL || size == 0)
                return (-1);

        // Call the recursive function to perform the binary search
        return (advanced_binary_recursive(array, 0, size - 1, value));
}

