#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename:            A file's name.
 * @text_content:        Content.
 * Return:               1 if the file exists.
 *                       -1 if the fails does not exist or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lenLett, nWrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	else if (text_content)
	{
		lenLett = 0;
		while (text_content[lenLett])
			lenLett++;

		nWrite = write(fd, text_content, lenLett);

		if (nWrite == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
