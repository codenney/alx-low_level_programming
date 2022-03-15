#include "main.h"

/**
 * print_sign - Function entry
 * @n: Accept input in this variable
 * Description: A function that prints the sign of a number
 * Return: 0 if zero, 1 if > 1, -1 if < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (1);
}
