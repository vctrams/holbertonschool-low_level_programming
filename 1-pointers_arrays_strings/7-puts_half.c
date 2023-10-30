#include "main.h"
/**
 * puts_half - prints half of a string function
 * followed by a new line
 *
 * @str: Is the input string
 */

void puts_half(char *str)
{
	int i = 0, half;

	while (str[i] != '\0')
	{
		i++;
	}
	half = i / 2;
	if (i % 2 != 0)
	{
		half = ((i - 1) / 2) + 1;
	}
	for (; half < i; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
