#include "function_pointers.h"

/**
 * main - function entry
 * Description: A program that prints the opcodes of its own main function
 * @argc: commandline count
 * @argv: commandline argument(s)
 * Return: 0 as success
 */
int main(int argc, char **argv)
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	int (*main_ptr)() = &main;

	unsigned char *main_opcodes = (unsigned char *)main_ptr;

	for (i = 0; i < num; i++)
	{
		printf("%02x ", *(main_opcodes + i));
	}

	printf("\n");

	return (0);
}
