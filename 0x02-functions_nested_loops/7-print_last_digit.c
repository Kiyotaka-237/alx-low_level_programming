#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: parameter who's last digit is printed
 *
 * Return: Always last
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last *= -1;
	}
	return (last);
}
