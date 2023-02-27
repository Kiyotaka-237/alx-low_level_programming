#include <stdio.h>
#include "main.h"

/**
 * print_array - prints arry
 *
 * @a: array
 * @n: lenght of arry
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
