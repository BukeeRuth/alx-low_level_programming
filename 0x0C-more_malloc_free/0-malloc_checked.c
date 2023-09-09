#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - funtion to allocate memory using malloc
 * @x: first parameter
 * Return: result
 */


void *malloc_checked(unsigned int x)
{

	char *result;

	result = malloc(x);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
