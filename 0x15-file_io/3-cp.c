#include "main.h"

/**
 * main - Main entry
 * Description: A program that copies the content of a file to another file
 * @argc: The arguments count
 * @argv: The list of arguments
 * Return: 0 as success
 */
int main(int argc, char **argv)
{
	int file_from, file_to, to_write, close_from, close_to;
	int length = 1024;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	print_error(file_from, file_to, argv);

	while (length == 1024)
	{
		length = read(file_from, buf, 1024);
		if (length == -1)
			print_error(-1, 0, argv);

		to_write = write(file_to, buf, length);
		if (to_write == -1)
			print_error(0, -1, argv);
	}

	close_from = close(file_from);

	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit(100);
	}
	close_to = close(file_to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
		exit(100);
	}
	return (0);

}


/**
 * print_error - Function entry
 * Description: A program that prints and return an error
 * @reed: return value after reading the file
 * @wright: return value after writing to the file
 * @list: list of command line arguments
 */
void print_error(int reed, int wright, char **list)
{
	if (reed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", list[1]);
		exit(98);
	}

	if (wright == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", list[2]);
		exit(99);
	}

}
