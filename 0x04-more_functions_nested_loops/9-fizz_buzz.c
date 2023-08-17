#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by new line
 * however for multiples of three it prints Fizz instead of the number
 * and for the multiples of five it prints Buzz
 * and for multiples of both 3 and 5,
 * it prints Fizzbuzz
 * Return: 0 always for a successful code
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");

	}
	return (0);

}
