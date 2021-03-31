#include "holberton.h"

/**
 * create_file - creates a file and adds text content
 * @filename: name of the file to create
 * @text_content: text content to add
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	int write_it;
	ssize_t len = 0; /* length */

	if (!filename)
		return (-1);

	/* creates file with rw, if it exists truncate */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if content, write it to the file */
	if (text_content)
	{
		while (text_content[len])
			len++;

		write_it = write(fd, text_content, len);
		if (write_it == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
