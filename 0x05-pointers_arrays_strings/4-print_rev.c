#include "main.h"

/**
 * print_rev - reversed a string
 *
 * @s: pointer to string passed on to function
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	char *str;
	int n;

	str = s;
	n = _strlen(s);
	for (s = &str[n]; s >= str; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
