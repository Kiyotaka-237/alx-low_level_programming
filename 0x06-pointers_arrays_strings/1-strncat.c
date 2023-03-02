#include "main.h"

/**
 * _strncat - concatenates two strings taking
 * only a number of byte of fist string
 *
 * @dest: who cares
 * @src: no one
 * @n: yh sure no one
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && i < n)
	{
		*p++ = *src++;
		i++;
	}
	*p++ = '\0';
	return (dest);
}
