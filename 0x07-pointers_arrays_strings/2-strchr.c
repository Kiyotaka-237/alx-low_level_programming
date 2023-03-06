#include "main.h"

/**
 * _strchr - what ever
 *
 * @s: stirng
 * @c: no
 *
 * Return: something
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s + i);
		}
		i++;
		s++;
	}
	if (*s == c)
	{
		return (s + i);
	}
	return (0);
}
