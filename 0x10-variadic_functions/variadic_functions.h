#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>
/**
* struct binder - binder class
* @token: format binder
* @f: function associate
*/

typedef struct binder
{
  char *binder;
void (*f)(char *, va_list);
} binder_b;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_all(const char * const format, ...);
#endif
