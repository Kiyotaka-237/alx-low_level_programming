#include "main.h"

/**
 * _strcpy - copies a string into anohter
 *
 * @dest: buffer into wich string is copied
 * @src: string copied
 *
 * Return: Always dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	return (dest);
}
