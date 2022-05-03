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
	int file_from, file_to, to_read, to_write, close_from, close_to;
	int length = 1024;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	to_read = read(file_from, buf, length);
	to_write = write(file_to, buf, to_read);
	print_error(to_read, to_write, argv);

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
