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
	int startIndex;
	int i;

	if (length % 2 == 0)
	{
		startIndex = length / 2;
	}

	else
	{
		startIndex = (length - 1) / 2;
	}

	for (i = startIndex; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');


}
