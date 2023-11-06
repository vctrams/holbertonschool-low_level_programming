#include <stdio.h>

/**
 * main - function that prints number of arguments
 * @argc: the size of the argv array
 * @argv: an array containing the program command line arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
