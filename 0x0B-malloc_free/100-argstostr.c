#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of arguments
 * @av: An array of argument strings
 *
 * Return: A pointer to the concatenated string
 *         or NULL if ac is 0 or av is NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total_length = 0;
	char *concatenated_str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	concatenated_str = malloc((total_length + 1) * sizeof(char));
	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concatenated_str[k] = av[i][j];
			j++;
			k++;
		}
		concatenated_str[k] = '\n';
		k++;
	}
	concatenated_str[k] = '\0';

	return (concatenated_str);
}

