#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - what ever
 *
 * @a: array
 * @size: bla bla
 *
 * Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag_1 = 0, sum_diag_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag_1 += a[(i * size) + i];
		sum_diag_2 += a[(size - 1) + ((size - 1) * i];
	}
	printf("%d, %d\n", sum_diag_1, sum_diag_2);
}

