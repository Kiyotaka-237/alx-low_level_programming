#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * @n: function parameter
 *
 * Return: Always n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	else if (n >= 0)
	{
		n = n;
	}
	return (n);
}
