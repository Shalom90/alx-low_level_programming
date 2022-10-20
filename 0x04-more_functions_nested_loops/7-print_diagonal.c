#include "main.h"
/**
  * print_diagonal- function which draws a diagonal line on the terminal
  * @n: size of the diagonal
  * Return: returns no error
  */

void print_diagonal(int n)
{
	int x, y;

	for (x = 1; n > 0 && x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			if (y == x)
			{
				_putchar(92);
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
