#include "main.h"

/**
 * jack_bauer - Function entry
 * Description: A function that prints every minute of the day of Jack Bauer
 * ...starting from 00:00 to 23:59
 * Return: nothing!
 */
void jack_bauer(void)
{
	int k = 0;

	while (k < 3)
	{
		int l = 0;

		while (l < 4)
		{
			int i = 0;

			while (i < 6)
			{
				int j = 0;

				while (j < 10)
				{
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar(':');
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar('\n');
					j++;
				}
				i++;
			}
			l++;
		}
		k++;
	}
}
