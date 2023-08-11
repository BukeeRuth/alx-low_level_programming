#include <stdio.h>
/**
* main - the entry point
*
* Return: Always return zero as a successful code
*
* betty style doc for function main goes there
*/

int main(void)
{
char lowerLetter = 'z';
while (lowerLetter >= 'a')
{
putchar(lowerLetter);
lowerLetter--;
}
putchar('\n');
return (0);
}
