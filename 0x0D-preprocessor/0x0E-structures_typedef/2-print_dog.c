/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 *
 * This function takes a pointer to a struct dog and prints its elements
 * in the following format:
 *   Name: <name>
 *   Age: <age>
 *   Breed: <breed>
 * If an element of d is NULL, prints (nil) instead of the element.
 * If d is NULL, prints nothing.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct dog
{
    char *name;
    float age;
    char *breed;
};

void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return;
    }
    printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
    printf("Age: %.6f\n", d->age);
    printf("Breed: %s\n", d->breed == NULL ? "(nil)" : d->breed);
}

