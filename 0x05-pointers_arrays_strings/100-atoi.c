#include "main.h"

/**
 * _atoi - a function converts a string to an integer
 * @s: string to be converted
 *
 * Return: result of the function
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}

		else
		{
			break;
		}

		i++;
	}

	return (result * sign);

}
