#include "maim.h"

/**
 * is_palindrome - pal
 *
 * @s: strirng
 * Return: integer
 */
int is_palindrome(char *s)
{
	int len = 0, track = 0;
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
