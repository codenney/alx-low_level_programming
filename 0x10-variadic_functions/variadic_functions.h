#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printString(va_list myList);
void _printFloat(va_list myList);
void _printInt(va_list myList);
void _printChar(va_list myList);

typedef struct converter
{
	char *type;
	void (*func)();
} converter;


#endif
