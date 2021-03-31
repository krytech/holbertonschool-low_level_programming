#include "holberton.h"

/**
 * exit_case - switch case to print possible errors
 * @error: error case
 * @s: name of file
 * @fd: file descriptor
 * Return: 0
 */

int exit_case(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * copy_file - copies the contents of one file to another
 * @argc: argument counter (3)
 * @argv: argument values, file 1, file 2
 * Return: 0 if success, 97-100 if error
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2; /* file descriptors for from and to files */
	int read_it, write_it;
	char *buffer[1024];

	/* if not 3 arguments */
	if (argc != 3)
		exit_case(97, NULL, 0);

	/* fd for copy to file */
	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		exit_case(99, argv[2], 0);

	/* fd for copy from file */
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		exit_case(98, argv[1], 0);

	while ((read_it = read(fd_1, buffer, 1024)) != 0)
	{
		if (read_it == -1) /* read error */
			exit_case(98, argv[1], 0);

		write_it = write(fd_2, buffer, read_it);
		if (write_it == -1) /* write error */
			exit_case(99, argv[2], 0);
	}

	close(fd_2) == -1 ? (exit_case(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (exit_case(100, NULL, fd_1)) : close(fd_1);

	return (0);
}
