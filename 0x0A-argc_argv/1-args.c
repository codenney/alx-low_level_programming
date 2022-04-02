#include <stdio.h>

/**
 * main - Main Entry
 * Description: A program that prints the number of arguments passed into it
 * @argc: the argument count
 * @argv: the array of character pointers
 * Return: 0 if successful
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	int argumentCount = argc - 1;

	printf("%d\n", argumentCount);

	return (0);
}
