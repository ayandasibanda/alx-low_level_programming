#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string that will be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Checks for the sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	/* Processes each character */
	while (s[i] != '\0')
	{
		/* Updates the result */
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) + (s[i] - '0');
		}
		else
		{
			/* Ignores non-digit characters */
			break;
		}

		i++;
	}

	return (result * sign);
}

