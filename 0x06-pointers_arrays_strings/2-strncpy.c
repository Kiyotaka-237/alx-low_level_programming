#include "main.h"

/**
 * _strncpy - just formality
 * @dest: hey
 * @src: oh
 * @n: in
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*p++ = *src++;
		i++;
	}
	*p++ = '\0';
	return (dest);
}
