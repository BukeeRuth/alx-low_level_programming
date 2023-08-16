#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - count numbers from n to 98.
 * @n: initialize count
 *
 */

void print_to_98(int n)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
printf("\n");
}

