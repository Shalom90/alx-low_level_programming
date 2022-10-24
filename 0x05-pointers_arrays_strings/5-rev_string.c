#include "main.h"
/**
  * rev_string- reverses a string
  * @s: pointer
  * Return: returns void or nothing
  */

void rev_string(char *s)
{
	int a, rev1, rev2;
	char str;

	rev1 = 0;
	rev2 = 0;

	while (s[rev1] != '\0')
	{
		rev1++;
	}

	rev2 = rev1 - 1;

	for (a = 0; a < rev1 / 2; a++)
	{
		str = s[a];
		s[a] = s[rev2];
		s[rev2--] = str;
	}
}
