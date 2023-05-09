#include "main.h"
/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: (0) Success
 */

int main(int argc, char *argv[])
{
	int rd_f, wr_f, i, j, k;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rd_f = open(argv[1], O_RDONLY);
	if (rd_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr_f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(rd_f, buffer, BUFSIZ)) > 0)
	{
		if (wr_f < 0 || write(wr_f, buffer, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(rd_f);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(rd_f);
	k = close(wr_f);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rd_f);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wr_f);
		exit(100);
	}
	return (0);
}
