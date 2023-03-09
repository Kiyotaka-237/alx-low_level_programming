#include "main.h"

/**
 * _pow_recursion - adk
 *
 * @x: sdjkl
 * @y: dsjkl
 *
 * Return: interger
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
