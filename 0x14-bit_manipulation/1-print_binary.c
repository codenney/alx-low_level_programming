#include "main.h"

/**
 * print_binary -  function entry
 * Description: A function that prints the binary representation of a number
 * @n: the decimal number to convert
 * Return: the converted number, or 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
