#include <stdio.h>
#include <stdlib>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d in negative\n", n);
	else
	if (n > 0)
		printf("%d is positive\n", n);
	else
	if (n == 0)
		printf("5d is zero\n", n);
	return (0);
}