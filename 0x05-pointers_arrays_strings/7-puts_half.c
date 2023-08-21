#include "main.h"
#include <string.h>

/**
 * puts_half - a function that prints half of a string.
 * @str: variable to be passed as parameter
 *
 * Return: zero for success
 */


void puts_half(char *str)
{
	int length = strlen(str);
	int halflength = length / 2;
	int i;

	for (i = 0; i < halflength; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
