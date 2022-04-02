#include "main.h"

/**
 * main - Main Entry
 * Description: A program that multiplies two numbers
 * @argc: the argument count
 * @argv: the array of character pointers
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int num1, num2, mul;

	if (argc < 3)
		printf("Error\n");
	else
	{
		/* The argument are stored in a pointer variables */
		char *argument2 = argv[1];
		char *argument3 = argv[2];

		/* The atoi takes in a char pointer and return the integer value*/
		num1 = atoi(argument2);
		num2 = atoi(argument3);

		mul = num1 * num2;

		printf("%d\n", mul);
	}

	return (0);
}
