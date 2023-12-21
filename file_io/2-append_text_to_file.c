#include "main.h"
#include <stdio.h>
/**
  * append_text_to_file - appends text at the end of a file
  * @filename: the file name
  * @text_content: NULL terminated string to write to file
  * Return: 1 on succes, -1 on fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		if (write(file, text_content, _strlen(text_content)) == -1)
			return (-1);
	}
	close(file);

	return (1);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
*/
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;
	return (c);
}
