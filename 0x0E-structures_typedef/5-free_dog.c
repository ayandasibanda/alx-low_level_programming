#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog
 * @d: Pointer to the dog to free
 *
 * Description: This function frees the memory allocated for the dog
 * structure, as well as the memory allocated for the name and owner strings.
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}

