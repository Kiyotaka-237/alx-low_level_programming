#include "main.h"

/**
* _strlen - returns the lenght of a string passed to it
*
* @s: string passed to function
*
* Return: Always length
*/
int _strlen(char *s)
{
	int length = 0;
	char *str;

	for (str = s; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
