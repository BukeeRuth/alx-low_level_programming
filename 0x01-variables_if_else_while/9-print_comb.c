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
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);

}
