#include "main.h"

/**
 * _strspn - fddd
 *
 * @s: sidfia
 * @accept: asdi
 *
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int i;

	while (*s)
	{
		for (i = 0; acceipt[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}

		}
		s++;
	}
	return (bytes);
}
