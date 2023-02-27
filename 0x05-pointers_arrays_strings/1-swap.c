#include "main.h"

/**
 * swap_int - swaps two inegers
 *
 * @a: first integer
 * @b: second integer
 *
 * Retunr: Always 0
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
