#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 as success
 */
int main(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
