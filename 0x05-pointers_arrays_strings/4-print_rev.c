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
	int n;

	n = _strlen(s);
	for (s = &n; s >= 0; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
