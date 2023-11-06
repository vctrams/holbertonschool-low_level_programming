#include <stdio.h>

/**
 * main - function that prints all arguments
 * @argc: the size of the argv array
 * @argv: an array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
