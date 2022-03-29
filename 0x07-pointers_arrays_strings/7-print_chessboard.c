#include "main.h"

/**
 * print_chessboard - Function entry
 * Description: A function that prints the chessboard
 * @a: A pointer address to the string
 * Return: See nothing!
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, m = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			m = i;
			_putchar('\n');
		}

		_putchar(a[i / 8][i - m]);
	}
	_putchar('\n');
}
