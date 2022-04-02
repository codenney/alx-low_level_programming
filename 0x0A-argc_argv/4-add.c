#include "main.h"

/**
 * main - Main Entry
 * Description: A program that adds positive numbers
 * @argc: the argument count
 * @argv: the array of character pointers
 * Return: 0 if successful
 * ...return 1 if number contains symbols that are not digits
 */
int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		int i = 1, sum = 0;

		while (i < argc)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{

				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}

			sum += atoi(argv[i]);

			i++;
		}
		printf("%d\n", sum);
	}

	return (0);
}
