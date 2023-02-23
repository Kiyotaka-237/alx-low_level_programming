#include "main.h"

/**
 * positive_or_negative - checks the sign os a number
 *
 * @i: function parameter
 *
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
		printf("%d is positive\n", i);
}
