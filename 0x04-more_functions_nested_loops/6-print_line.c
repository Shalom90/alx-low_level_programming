#include "main.h"
/**
  * print_line- draws a straight line in the terminal
  * @n: number of times the char _ should be printed
  */

void print_line(int n)
{
	int a;

	for (a = 1; n >= 1 && a <= n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
