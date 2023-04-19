/**
 * print_name - prints a name
 *
 * @name: pointer to the name string
 * @f: function pointer to a function that takes a
 *     char pointer as argument and returns void
 *
 * This function prints the name string by calling
 * the function pointed to by f.
 * The function pointed to by f should be a function
 * that takes a char pointer as argument
 * and returns void.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}

