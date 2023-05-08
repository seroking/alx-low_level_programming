#include "main.h"

/**
 * read_textfile - read textfile with precising numb of letter to be printed in the stdout
 * @filename : name of the file
 * @letters : num of letter to be printed in the stdout
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i = 0;
	char buffer[1024];
	FILE file;

	file = fopen(filename, "r");
	read = fread(buffer, 1, letters, file);

	if (file == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	if (read == NULL)
		return (0);

	fwrite(buffer, 1, letters, stdout);

	fclose(file);

}
