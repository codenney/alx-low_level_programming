#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 as success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
