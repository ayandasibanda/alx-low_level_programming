#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: This function initializes the members of the struct dog
 * pointed to by `d` with the provided values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
