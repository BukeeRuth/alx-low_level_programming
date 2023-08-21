#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 * @str: variable to be counted
 *
 * Return: zero for success
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
