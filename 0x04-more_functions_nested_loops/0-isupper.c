#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: parameterr passed to function
 *
 * Return: 1 and 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
