#include "main.h"
/**
 * create_file -   Creates a file
 * @filename:      A file's name.
 * @text_content:  Content writed in the file.
 * Return:         1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lenLett, nWrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	lenLett = 0;
	while (text_content[lenLett])
		lenLett++;


	nWrite = write(fd, text_content, lenLett);

	if (nWrite == -1)
		return (-1);

	close(fd);

	return (1);
}
