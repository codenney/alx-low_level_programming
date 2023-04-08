#include "main.h"

/**
 * read_textfile - function entry
 * Description: A function that reads a text file
 * @filename: file name
 * @letters: number of letters it should read and print
 * and prints it to the POSIX standard output
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, toRead, toWrite;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	toRead = read(fd, buf, letters);

	if (toRead == -1)
		return (0);

	toWrite = write(STDOUT_FILENO, buf, toRead);

	if (toWrite == -1)
		return (0);

	close(fd);
	free(buf);

	return (toWrite);
}
