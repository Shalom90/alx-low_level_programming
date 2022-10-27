#include "main.h"
/**
  * *_strncpy- copies a string
  * @dest: destinaion
  * @src: source
  * @n: number of bytes from source
  * Return: returns the pointer to destination
  */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)

		dest[a] = src[a];

	for ( ; a < n; a++)

		dest[a] = '\0';

	return (dest);
}
