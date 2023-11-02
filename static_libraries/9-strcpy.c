#include "main.h"

/**
 * *_strcpy - copies the string pointed by src
 * @dest: char type string
 * @src: char type string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
