#include <stdio.h>

/**
* main - the start of the program main function
*
* Return: Always return zero as a successful code
*
* betty style doc for function main goes there
*/

int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	for (digit = 'a'; digit <= 'f'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
