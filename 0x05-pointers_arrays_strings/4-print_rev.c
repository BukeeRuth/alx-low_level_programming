#include "main.h"
#include <string.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: zero for success
  */

void print_rev(char *s)
{
	int length = strlen(s);

	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

