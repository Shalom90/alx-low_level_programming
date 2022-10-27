#include "main.h"
/**
  * *leet- encodes a string into 1337
  * @s: sring to be encoded
  * Return: the resulting string returns
  */

char *leet(char *s)
{
	int x, y;

	char *ah = "aAeEoOtTlL";
	char *bh = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == ah[y])
			{
				s[x] = bh[y];
			}
		}
	}

	return (s);
}
