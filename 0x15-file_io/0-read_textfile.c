#include "main.h"
/**
 * read_textfile - Function entry
 * Description: A function that reads a text file and prints it to
 * ...the POSIX standard output
 * @filename: The filename
 * @letters: length of the butter
 * Return: the actual number of letters it could read and print
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, to_read, to_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = (char *)malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	to_read = read(fd, buf, letters);

	if (to_read == -1)
		return (0);

	to_write = write(STDOUT_FILENO, buf, to_read);

	if (to_write == -1)
		return (0);

	close(fd);

	free(buf);

	return (to_write);
}
