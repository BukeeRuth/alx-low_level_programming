#include "main.h"

/**
* print_alphabet_x10 - print the alphabet in lowercase ten times
*
* Return: returns zero for a successful code
*/

void print_alphabet_x10(void)
{
int i;
for (i = 0; i <= 9; i++)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
_putchar(lowercase);
lowercase++;
}
_putchar('\n');
}
}
