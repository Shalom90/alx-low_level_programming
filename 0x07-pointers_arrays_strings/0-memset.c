#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: input pointer to string
 * @b: constant char
 * @n: number of bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)

	{
		s[a] = b;
		a++;
	}

	return (s);
}
