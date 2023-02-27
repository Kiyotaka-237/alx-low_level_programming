#include "main.h"

/**
 * rev_string - reverses a tring
 *
 * @s: string passed to function
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	char *ch, *c;
	int n = 0;
	
	ch = s;
	c = s;
	while (*ch++ != '\0')
	{
		n++;
	}
	for (ch = &ch[n - 1]; ch >= c; s++, ch--)
	{
		*s = *ch;
	}
	_putchar('\n');
}
