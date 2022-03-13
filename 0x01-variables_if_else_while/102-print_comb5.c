#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: something goes here
 *
 * Return: 0 as success
 */
int main(void)
{
	int i = 0;
	int a, b, c, d, j;

	while (i < 100)
	{
		a = i / 10; /* Prefix number */
		b = i % 10; /* Suffix number */

		j = 0;

		while (j < 100)
		{
			c = j / 10;
			d = j % 10;
			
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}

			
			j++;
		}
		
		i++;
	}
	putchar('\n');

	return (0);
}
