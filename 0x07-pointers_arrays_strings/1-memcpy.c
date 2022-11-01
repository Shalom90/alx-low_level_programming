#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src
 * to memory area dest
 * @dest: input pointer to string destination
 * @src: input pointer to source string
 * @n: number of bytes
 * Return: pointer to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);

		x++;
	}

	return (dest);
}
