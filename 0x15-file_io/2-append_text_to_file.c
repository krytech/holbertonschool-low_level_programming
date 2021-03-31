#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append
 * @text_content: text content to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* file descriptor */
	int write_it;
	ssize_t len = 0; /* length */

	if (!filename)
		return (-1);

	/*opens file to append */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if content, append to file */
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
