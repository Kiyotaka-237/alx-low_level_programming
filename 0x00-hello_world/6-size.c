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

	printf("Size of a char: %lu byte(s)\n", sizeof(me));
	printf("Size of an int: %lu byte(s)\n", sizeof(you));
	printf("size of a long int: %lu byte(s)\n", sizeof(we));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(us));
	printf("size of a float: %lu byte(s)\n", sizeof(they));
	return (0);
}
