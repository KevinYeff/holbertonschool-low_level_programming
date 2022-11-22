#include "main.h"
/**
 * main -  Copies one file in to another.
 * @argc:  Should be 3 arguments.
 * @argv:  First is file to copy from (fd_1), second is file to copy to (fd_2).
 * Return: 0 (success), 97-100 (exit value errors).
 */
int main(int argc, char *argv[])
{
	int fdo_from, fdo_to, fdr_from, fdw_to;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fdo_from = open(argv[1], O_RDONLY);
	if (fdo_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdo_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdo_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		fdr_from = read(fdo_from, buffer, 1024);
		fdw_to = write(fdo_to, buffer, fdr_from);
	} while (fdr_from == 1024);
	if (fdr_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	if (fdw_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (close(fdo_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo_from), exit(100);
	if (close(fdo_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdo_to), exit(100);
	return (0);
}
