#include "main.h"

/**
 * string_toupper - convets
 *
 * @str: parameter
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 97 && *p <= 122)
		{
			*p = *p - 32;
		}
		p++;
	}
	return (str);
}
