#include "main.h"

/**
 * create_file - Create a file.
 * @file_name: Pointer to the name of the file to create.
 * @content: Pointer to a string to write to the file.
 *
 * Return: On success, 1. On failure, -1.
 */

int create_file(const char *file_name, char *content)
{
	int fd, w, length = 0;

	if (file_name == NULL)
		return (-1);

	if (content != NULL)
	{
		for (length = 0; content[length]; length++)
			;
	}

	fd = open(file_name, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, content, length);
	if (w == -1 || w != length)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
