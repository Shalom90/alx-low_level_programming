#include "main.h"
/**
  * rot13- encodes a string in rot13
  * @s: string to be encoded
  * Return: the pointer to dest.
  */

char *rot13(char *s)
{
	int x, y;

	char *i = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *j = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; i[y] != '\0'; y++)
		{
			if (s[x] == i[y])
			{
				s[x] = j[y];

				break;
			}
		}
	}

	return (s);

}
