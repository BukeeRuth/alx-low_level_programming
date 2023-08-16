#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always zero for a successful code
 */

int main(void)
{
int n, i;
int n = 50;
uint64_t fib[n];
fib[0] = 1;
fib[1] = 2;

for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < n; i++)
{
printf("%" PRIu64 " ", fib[i];
}

printf("\n");

return (0);
}
