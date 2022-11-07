#include <stdlib.h>
#include "main.h"
/**
  * *str_concat- concatenates two strings
  * @s1: first string to concatenate
  * @s2: second string to concatenate
  * Return: pointer of an array of chars
  */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	unsigned int x, y, z, len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		;

	for (y = 0; s2[y] != '\0'; y++)
		;

	ch = malloc(sizeof(char) * (x + y + 1));

	if (ch == NULL)

	{
		free(ch);
		return (NULL);

	}

	for (z = 0; z < x; z++)
		ch[z] = s1[z];

	len = y;

	for (y = 0; y <= len; z++, y++)
		ch[y] = s2[z];

	return (ch);

}
