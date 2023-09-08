#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size == 0)
	return (NULL);

	/* Allocate memory for the hash table structure */
	new_table = calloc(1, sizeof(hash_table_t));
	if (new_table == NULL)
	return (NULL);

	new_table->size = size; /* Set the size of the hash table */

	/* Allocate memory for the array of pointers */
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
	free(new_table); /* Free the hash table structure if array allocation fails */
	return (NULL);
	}

	/* Initialize each array element to NULL */
	for (i = 0; i < size; i++)
	new_table->array[i] = NULL;

	return (new_table);
}

