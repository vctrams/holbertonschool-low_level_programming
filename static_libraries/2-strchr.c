#include "main.h"

/**
 * _strchr - function strchr
 * @s: pointer
 * @c: char for search
 * Return: search
 */

char *_strchr(char *s, char c)
{
int i = 0, x;

while (s[i])
{
i++;
}
for (x = 0; x <= i; x++)
{
if (c == s[x])
{
return (s + x);
}
}
return ('\0');
}
