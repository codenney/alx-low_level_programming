#include "main.h"

/**
 * print_binary -  function entry
 * Description: A function that prints the binary representation of a number
 * @n: the decimal number to convert
 * Return: the converted number, or 0
 */
void print_binary(unsigned long int n)
{
	int i = 31;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (i >= 0)
	{
		if (n & (1 << i))
			break;
		i--;
	}

	while (i >= 0)
	{
		if (n & (1 << i))
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
