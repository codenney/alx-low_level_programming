#include "main.h"

/**
 * print_square - Function entry
 * Description: A function that prints a square using the character #
 * @size: Variable name to hold the value
 * Return: nothing is bliss!
*/
void print_square(int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
