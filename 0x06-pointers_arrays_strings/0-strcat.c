#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string into which other string is copied to
 * @src: string copied
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p++ = '\0';
	return (dest);
}
