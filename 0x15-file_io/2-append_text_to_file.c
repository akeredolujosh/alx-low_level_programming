#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file.
 * @file_name: Pointer to the name of the file.
 * @text: The string to add to the end of the file.
 *
 * Return: On success, 1. On failure, -1.
 */

int append_text_to_file(const char *file_name, char *text)
{
	int fd, w, length = 0;

	if (file_name == NULL)
		return (-1);

	if (text != NULL)
	{
		for (length = 0; text[length]; length++)
			;
	}

	fd = open(file_name, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text, length);
	if (w == -1 || w != length)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
