#include "3-calc.h"

/**
 * main - main function entry
 * Description: A program to perform basic arithmetics
 * @argc: commandline count
 * @argv: commandline argument(s)
 * Return: 0 as success
 */
int main(int argc, char **argv)
{
	int a, b, result = 0;
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((operator[0] == '/' || operator[0] == '%') && (a == 0 || b == 0))
	{
		printf("Error\n");
		exit(99);
	}

	result = (*get_op_func(operator))(a, b);

	printf("%d\n", result);

	return (0);
}
