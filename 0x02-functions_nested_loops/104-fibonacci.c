#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2
 *
 * Return: Always zero to indicate successful run.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib3, fib4, fib5, fib6;
	unsigned long a, b;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib3 = fib1 / 10000000000;
	fib5 = fib2 / 10000000000;
	fib4 = fib1 % 10000000000;
	fib6 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		a = fib3 + fib5;
		b = fib4 + fib6;
		if (fib4 + fib6 > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}

		printf("%lu%lu", a, b);
		if (count != 98)
			printf(", ");

		fib3 = fib5;
		fib4 = fib6;
		fib5 = a;
		fib6 = b;
	}
	printf("\n");
	return (0);
}
