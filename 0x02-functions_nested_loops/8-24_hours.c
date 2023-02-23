#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints numbers in a time format
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			printf("%.2d:%.2d\n", hr, min);
		}
	}
}
