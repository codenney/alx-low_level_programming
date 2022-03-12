#include <stdio.h>

/**
 * main -Entry point
 * Description: A program that prints all possible
 * ...combinations of three digits
 *
 * Return: 0 as success
 */
int main(void)
{
	int i, j, k, l;

	i = 0;

	while (i < 1000)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
