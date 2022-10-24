#include "main.h"
/**
  * *_strcpy- copies the string pointed to by src
  * including the terminating null byte (\0)
  * to the buffer pointed to by dest
  * @dest: pointer to the bffer in which the string is copied
  * @src: string to be copied
  * Return: returns the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int a = 0, b;

	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
