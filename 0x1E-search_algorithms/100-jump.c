#include "search_algos.h"

/**
  * jump_search - This function performs a search for a specific value
  *               in a sorted array of integers using the Jump Search algorithm.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index of the first occurrence of the value.
  *
  * Description: Prints the value each time it is compared in the array.
  *              Utilizes the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
        size_t i, jump, step;

        // Check if the array is NULL or empty
        if (array == NULL || size == 0)
                return (-1);

        // Calculate the jump step
        step = sqrt(size);

        // Jump search implementation
        for (i = jump = 0; jump < size && array[jump] < value;)
        {
                printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
                i = jump;
                jump += step;
        }

        printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

        // Ensure that the jump doesn't exceed the array bounds
        jump = jump < size - 1 ? jump : size - 1;

        // Linear search within the identified block
        for (; i < jump && array[i] < value; i++)
                printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);

        // Check if the value is found
        return (array[i] == value ? (int)i : -1);
}

