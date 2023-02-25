#include <stdio.h>

/**
 * lpf - finds the highest prime factor of a number
 *
 * @x: lpf's parameter value who's highest prime factor is computed
 *
 * Return: Always 0
 */

/**
 * main - calls lpf function
 *
 * Return: Always 0
 */

void lpf(long long int x)
{
	long long int lpf = 2;

	while (x > lpf)
	{
		if (x % lpf == 0)
		{
			x = x / lpf;
			lpf = 2;
		}
		else
		{
			lpf++;
		}
	}
	printf("Largest Prime Factor: %lld\n", lpf);
}

int main(void)
{
	long long x;

	x = 612852475143;
	lpf(x);
	printf("\n");
	return (0);
}
