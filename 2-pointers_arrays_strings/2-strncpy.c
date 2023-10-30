#include "main.h"

/**
 * _strncpy - function copy
 * @dest: destino
 * @src: origen
 * @n: n
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*temp = *src;
		temp++;
	}
	for (; n != 0 && *temp != '\0'; n--, temp++)
		*temp = '\0';
	return (dest);
}
