#include "main.h"
/**
  * print_rev- prints a string in reverse
  * followed by a new line
  * @s: string
  * Return: void or nothing returns
  */

void print_rev(char *s)
{
	int a, b, str;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	str = a;

	for (b = str - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
