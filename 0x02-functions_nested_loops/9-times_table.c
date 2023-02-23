#include <stdio.h>
#include "main.h"

/**
 * times_table - times table
 *
 * Return: Always 0
 */

void times_table(void)
{
	int n, i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i == 9)
			{
				printf("%2d", i * n);
			}
			else if (i == 0)
			{
				printf("%d, ", i * n);
			}
			else
			{
			printf("%2d, ", i * n);
			}
		}
		printf("\n");
	}
}
