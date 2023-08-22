#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  generates random valid passwords
 * for the program 101-crackme
 * Return: 0 always
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int passwd[100];
int i, totalSum, x;

totalSum = 0;

srand(time(NULL));

for (i = 0; i < 100; i++)
{
passwd[i] = rand() % 78;
totalSum += (passwd[i] + '0');
putchar(passwd[i] + '0');

if ((2772 - totalSum) < 78)
{
x = 2772 - totalSum - '0';
totalSum += x;
putchar(x + '0');
break;
}
}

return (0);
}
