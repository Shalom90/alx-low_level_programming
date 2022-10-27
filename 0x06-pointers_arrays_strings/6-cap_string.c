#include "main.h"
/**
  * *cap_string- capitalizes all words of a string
  * @s: string
  * Return: returns the resulting string
  */

char *cap_string(char *s)
{
	int x = 1, y, z;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')'
		, '{', '}'};

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;

	while (s[x] != '\0')
	{
		if (s[x] > 96 && s[x] < 123)
		{
			y = 0;
			z = 0;

			while (z == 0 && y < 13)
			{
				if (s[x - 1] == sep[y])
				{
					z = 1;
				}
				y++;
			}
			if (z == 1)
			{
				s[x] -= 32;
			}
		}
		x++;
	}

	return (s);
}
