#include "main.h"

/**
 * _isdigit - checks for digit
 *
 * @c: function parameter which is checked
 *
 * Return: 1 and 0
 */
int _isdigit(int c)
{
	c %= 10;
	if (c == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
