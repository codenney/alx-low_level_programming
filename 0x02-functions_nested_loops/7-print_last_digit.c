#include "main.h"

/**
 * print_last_digit - Function Entry
 * @m: variable that holds the provided value
 * Description: A function that prints the last digit of a number
 * Return: The last ligit of m
 */
int print_last_digit(int m)
{
	m = m % 10;
	if (m < 0)
		m *= -1;

	_putchar(m + '0');
	return (m);
}
