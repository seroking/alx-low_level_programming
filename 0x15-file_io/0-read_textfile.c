#include "main.h"

/**
 * read_textfile - read textfile
 * @filename : name of the file
 * @letters : num of letter to be printed in the stdout
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t lire, ecrire, file_op;

	if (!filename)
		return (0);

	file_op = open(filename, O_RDONLY);
	if (file_op < 0)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);
	lire = read(file_op, buffer, letters);
	if (lire < -1)
	{
		free(buffer);
		return (0);
	}

	buffer[lire] = '\0';
	ecrire = write(STDOUT_FILENO, buffer, lire);

	if (lire < 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_op);
	return (ecrire);
}
