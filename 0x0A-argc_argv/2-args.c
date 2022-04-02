#include <stdio.h>

/**
 * main - Main Entry
 * Description: A program that prints all arguments it receives
 * @argc: the argument count
 * @argv: the array of character pointers
 * Return: 0 if successful
 */
int main(int __attribute__ ((__unused__)) argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
