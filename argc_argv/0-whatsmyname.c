#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: the size of the argv array
 * @argv: an array containing the program command line arguments
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
