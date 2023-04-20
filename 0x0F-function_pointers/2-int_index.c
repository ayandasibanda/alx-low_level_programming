/**
 * int_index - Searches for an integer in an array
 * @array: Pointer to the array to search
 * @size: Number of elements in the array
 * @cmp: Pointer to the comparison function to use
 *
 * Return: Index of the first element for which the cmp function does not
 *         return 0, or -1 if no such element is found or if size <= 0.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    if (size <= 0)
    {
        return -1;
    }

for (int i = 0; i < size; i++)
{
    if (cmp(array[i]) != 0)
    {
        return i;
    }
}
return -1;
}

