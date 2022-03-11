#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 as success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	putchar('\n');

	return (0);
}
