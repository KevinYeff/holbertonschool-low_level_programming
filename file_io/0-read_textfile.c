#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename:      A pointer to the name of the file.
 * @letters:       The number of letters the
 *                 function should read and print.
 * Return:         If the function fails or filename is NULL - 0 otherwise
 *                 the number of bytes so the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nRead, nWrite;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nRead = read(fd, buf, letters);
	nWrite = write(STDOUT_FILENO, buf, nRead);

	close(fd);

	free(buf);

	return (nWrite);
}
