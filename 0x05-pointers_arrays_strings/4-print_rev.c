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
	int n = 0;
	
	str = s;
	while (*s++ != '\0')
	{
		n++;
	}
	s--;
	for (; s >= str; s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
