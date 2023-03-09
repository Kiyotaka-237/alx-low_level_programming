#include "main.h"

/**
 * _print_rev_recursion - what ever
 *
 * @s: the
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
