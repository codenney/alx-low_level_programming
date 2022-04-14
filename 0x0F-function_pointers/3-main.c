#include "3-calc.h"

/**
 * main - Main entry
 * Description: A program to perform arithmetics
 * @argc: commandline count
 * @argv: commandline argument(s)
 * Return: 0 as success
 */
int main(int argc, char **argv)
{
	int a, b;
	int result = 0;
	char *sign = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(sign) == NULL || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(*(argv + 1));
	b = atoi(*(argv + 3));

	if ((*(sign + 0) == '/' || *(sign + 0) == '%') && (a == 0 || b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(sign))(a, b);

	printf("%d\n", result);

	return (0);

}
