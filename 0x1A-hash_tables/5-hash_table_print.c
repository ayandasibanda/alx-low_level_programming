#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Print the key-value pairs in a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *node;
    unsigned long int i;
    unsigned char comma_flag = 0;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            if (comma_flag == 1)
                printf(", ");

            node = ht->array[i];
            while (node != NULL)
            {
                printf("'%s': '%s'", node->key, node->value);
                node = node->next;
                if (node != NULL)
                    printf(", ");
            }
            comma_flag = 1;
        }
    }
    printf("}\n");
}
