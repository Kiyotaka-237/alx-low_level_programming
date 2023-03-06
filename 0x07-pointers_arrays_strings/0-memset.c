#include "main.h"
/**
 * _memset - what ever
 *
 * @s: something
 * @b: don't care
 * @n: still don't care
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
