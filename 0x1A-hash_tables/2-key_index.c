#include "hash_tables.h"

/**
 * key_index - Calculate the index for a given key in a hash table array.
 * @key: The key to calculate the index for.
 * @size: The size of the hash table array.
 *
 * Return: The index where the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;

    /* Calculate the hash value using the djb2 algorithm */
    hash_value = hash_djb2(key);

    /* Map the hash value to an index within the array size */
    return (hash_value % size);
}

