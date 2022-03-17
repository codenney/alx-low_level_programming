#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * times_table - Function entry
 * Description: A function that prints the 9 times table, starting with 0
 * Return: see nothing!
 */
void times_table(void)
{
	int a = 0, b, c;

	while (a <= 9)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		b = 1;

		while (b <= 9)
		{
			c = (a * b);

			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((c % 10) + '0');

			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}

		a++;

		_putchar('\n');
	}
}
