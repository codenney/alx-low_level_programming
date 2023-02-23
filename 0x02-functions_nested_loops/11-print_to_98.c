#include "main.h"

/**
 * print_to_98 - Function entry
 * Description: A function that prints all natural numbers from n to 98
 * @n: Variable that holds the output for n
 * Return: No return value
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);

		if (n != 98)
		{
			printf(", ");
		}
		else if (n > 98)
		{
			while (n > 98)
			{
				printf("%d", n);
				n--;
			}
		} else
		{
			while (n < 98)
			{
				printf("%d", n);
				n++;
			}
		}
		n++;
	}
	printf("98\n");
}
