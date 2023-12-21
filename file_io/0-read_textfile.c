#include "main.h"
#include <stdlib.h>
/**
  * read_textfile - reads a text file and prints it to the POSIX
  * @filename: file to read
  * @letters: number of letters it should read and print
  * Return: number of letters it could read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	int file;
	size_t lRead, check;

	if (!filename || !letters)
		return (0);

	str = malloc(letters);
	if (!str)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(str);
		return (0);
	}
	lRead = read(file, str, letters);
	if (lRead < 1)
	{
		free(str);
		close(file);
		return (0);
	}
	check = write(STDOUT_FILENO, str, lRead);

	free(str);
	close(file);

	if (!check || check != lRead)
		return (0);

	return (lRead);
}
