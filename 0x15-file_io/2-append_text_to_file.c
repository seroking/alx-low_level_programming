#include "main.h"

/**
 * append_text_to_file - apend text to the file
 * @filename : filename
 * @text_content : text content
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int x = 0, op_f, wr_f;

	if (filename == NULL)
		return (-1);

	op_f = open(filename, O_WRONLY | O_APPEND);
	if (op_f < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(op_f);
		return (1);
	}

	while (text_content[x] != '\0')
	{
		x++;
	}

	wr_f = write(op_f, text_content, x);
	if (wr_f < 0)
		return (-1);

	close(op_f);
	return (1);
}
