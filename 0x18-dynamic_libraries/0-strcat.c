#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: argument 1
 * @src: argument 2
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
