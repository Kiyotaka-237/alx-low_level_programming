#include "main.h"

/**
 * _memcpy - what ever
 *
 * @dest: who cares
 * @src: no one
 * @n: yh no one
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest++ = src++;
		i++;
	}
	return (dest);
}
