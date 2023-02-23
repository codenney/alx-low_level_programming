#include "main.h"

/**
 * print_times_table - Function entry
 * Description: A function that prints the n times table, starting with 0
 * @n: Variable that holds the value for n
 * Return: No return value
 */
void print_times_table(int n)
{
	int i = 0, j;
	while (!(n > 15 || n < 0) && i <= n)
	{
		j = 0;

		while (j < n)
		{
			printf("%d,  ", j * i);
			j++;
		}
		printf("%d", j * i);
		i++;
		putchar('\n');
	}
}
