#include "main.h"
#include <stdlib.h>
/**
  * *_strdup- copies the string given as a parameter
  * @str: string to be duplicated
  * Return: returns a pointer to a newly allocated space in memory
  */
char *_strdup(char *str)
{
	char *strcpy;
	unsigned int x, y;

	if (str == NULL)

		return (NULL);

	for (x = 0; str[x] != '\0'; x++)

		;

	strcpy = (char *)malloc(sizeof(char) * (x + 1));

	if (strcpy == NULL)

		return (NULL);

	for (y = 0; y <= x; y++)

		strcpy[y] = str[y];

	return (strcpy);
}
