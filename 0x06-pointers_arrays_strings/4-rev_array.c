#include "main.h"

/**
 * reverse_array - hmmm
 *
 * @a: not at all
 * @n: yep
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int rev[n], i = 0;

	for (; i < n; i++)
	{
		rev[i] = a[i];
	}
	n -= 1;
	for (i = 0; n >= 0; n--, i++)
	{
		a[i] = rev[n];
	}
}
