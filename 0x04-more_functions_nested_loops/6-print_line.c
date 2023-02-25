#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *
 * @n: functionparameter for number of times '_' is printed
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	while (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
