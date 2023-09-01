#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 for success otherwise 1
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Null\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);

}




