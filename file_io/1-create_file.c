#include "main.h"

/**
  * create_file - creates a file with permissions
  * @filename: the name of the new file
  * @text_content: NULL terminated string to write to file
  * Return: 1 on succes, -1 on fail
  */

int create_file(const char *filename, char *text_content)
{
	int file, lenght = 0, check = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (lenght = 0; text_content[lenght]; lenght++)
			;
		check = write(file, text_content, lenght);
	}
	close(file);
	if (check != lenght)
		return (-1);

	return (1);
}
