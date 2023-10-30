#include "main.h"

/**
 * string_toupper - function to uppercase
 * @a: pointer to string
 * Return: pointer to uppercase string
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;

		i++;
	}
	return (a);
}
