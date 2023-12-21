#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - copy a file into another file
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0 if success
*/

int main(int argc, char **argv)
{
	int file, filenew;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	filenew = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (filenew == -1)
		filenew = open(argv[2], O_TRUNC | O_WRONLY);
	if (filenew == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file);
		exit(99);
	}

	copy_text_file(file, filenew, argv[1], argv[2]);

	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		close(filenew);
		exit(100);
	}
	if (close(filenew) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filenew);
		exit(100);
	}
	return (0);
}

/**
 * copy_text_file - copies one file to the other
 * @file: opened file1 (file to copy)
 * @filenew: opened file2 (new copy)
 * @file1: name of file1
 * @file2: name of file2
*/

void copy_text_file(int file, int filenew, char *file1, char *file2)
{
	ssize_t lenRead = 1, lenWrite = 1;
	char buffer[1024];

	while (lenRead)
	{
		lenRead = read(file, buffer, sizeof(buffer));
		if (lenRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
			close(file);
			close(filenew);
			exit(98);
		}
		if (!lenRead)
			break;
		lenWrite = write(filenew, buffer, lenRead);
		if (lenWrite == -1 || lenWrite != lenRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			close(file);
			close(filenew);
			exit(99);
		}
	}
}
