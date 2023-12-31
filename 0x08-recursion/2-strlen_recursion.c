#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: function parameter
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
