#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: argument
 * @m: argument
 * Return: number of bits you would need to flip to get from one number to
 * another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int count;

	i = n ^ m;
	count = 0;

	while (i)
	{
		count++;
		i &= (i - 1);
	}

	return (count);
}
