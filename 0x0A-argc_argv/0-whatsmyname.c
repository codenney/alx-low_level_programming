#include <stdio.h>

/**
 * main - Main Entry
 * Description: A program that prints its name, followed by a new line
 * @argc: the argument count
 * @argv: the array of character pointers
 * Return: 0 if successful
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	char *myName = argv[0];

	printf("%s\n", myName);

	return (0);
}
