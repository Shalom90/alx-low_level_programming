#include "main.h"
/**
  * print_alphabet_x10- prints 10times the alphabet in lowercase
  */

void print_alphabet_x10(void)
{
	char ch, x;

	for (x = 0; x < 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
