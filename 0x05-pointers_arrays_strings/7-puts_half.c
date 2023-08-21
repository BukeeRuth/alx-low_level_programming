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
	int i = 0;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');


}
