#include "main.h"

/**
 * *_strcat - concatenates
 * @dest: variable
 * @src: variable
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	for (; *temp != '\0'; temp++)
	{
		;
	}
	for (; *src != '\0'; src++)
	{
		*temp = *src;
		temp++;
	}
	*temp = *src;
	return (dest);
}
