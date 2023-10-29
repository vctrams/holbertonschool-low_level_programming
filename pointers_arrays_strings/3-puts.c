#include "main.h"

/**
 * _puts - print a string
 * @str: variable
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
