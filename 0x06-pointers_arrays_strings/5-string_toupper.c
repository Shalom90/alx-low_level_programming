#include "main.h"
/**
  * *string_toupper- changes all lowercase letters of a string to uppercase
  * @s: input string
  * Return: the resulting string
  */

char *string_toupper(char *s)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')

			s[x] = s[x] - 32;

	}

	return (s);
}
