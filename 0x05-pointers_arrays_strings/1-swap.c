#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: An int to be swapped
  * @b: The other integer to swapped with int a
  *
  * Return: zero for a successful code
  */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


