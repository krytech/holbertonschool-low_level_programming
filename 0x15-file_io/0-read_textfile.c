#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of file to read
 * @letters: number of letters it should read and print
 * Return: the number of letters it could read and print,
 * otherwise 0 if it couldn't open, read or write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t read_it, write_it;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY); /* open */
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	read_it = read(fd, buffer, letters); /* read */
	if (read_it == -1)
		return (0);

	write_it = write(STDOUT_FILENO, buffer, read_it); /* write */
	if (write_it == -1)
		return (0);

	free(buffer);
	close(fd);
	return (write_it);
}
