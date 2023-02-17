#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char me;
	int you;
	long int we;
	long long int us;
	float they;

	printf("Size of a char: %zu byte(s)\n", sizeof(me));
	printf("Size of an int: %zu byte(s)\n", sizeof(you));
	printf("Size of a long int: %zu byte(s)\n", sizeof(we));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(us));
	printf("Size of a float: %zu byte(s)\n", sizeof(they));
	return (0);
}
