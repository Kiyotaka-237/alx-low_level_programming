#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string computed
 *
 * Return: Always 0
*/
void puts_half(char *str)
{
	int i = 0, n = 0;
	char *ch;

	ch = str;
	while (*ch != '\0')
	{
		ch++;
		i++;
	}
	for (; n <= i / 2; n++, str++)
	{
		putchar(*str);
	}
}
