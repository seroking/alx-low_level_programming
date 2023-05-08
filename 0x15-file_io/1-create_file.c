#include "main.h"


/**
 * create_file - create file.
 * @filename : filename.
 * @text_content : content of the crated file.
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{

	int op_f, wr_f, x = 0;



	op_f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
