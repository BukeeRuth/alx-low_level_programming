#include "main.h"

/**
* print_alphabet - print alphabets in lower case
*
*
* Return: returns zero for a successful code
*/

void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')

	{
		_putchar(lowercase);
			lowercase++;
	}
	_putchar('\n');
}

