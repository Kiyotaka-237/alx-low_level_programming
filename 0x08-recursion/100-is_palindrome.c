#include "main.h"

/**
 * is_palindrome - pal
 *
 * @s: strirng
 * Return: integer
 */
int is_palindrome(char *s)
{
	char *p = s, *q = s;

	while (*p != '\0')
	{
		p++;
	}
	for (p--; q <= p; q++, p--)
	{
		if (*q != *p)
			break;
	}
	if (q > p)
	{
		return (1);
	}
	else
		return (0);
}
