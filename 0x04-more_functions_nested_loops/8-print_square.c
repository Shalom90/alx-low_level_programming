#include "main.h"
/**
  * print_square- prints square followed by a new line
  * @size: size of the square
  */

void print_square(int size)
{
	if (size > 0)
	{
		int a;

		for (a = 1; a <= size, a++)
		{
			int b;

			for (b = 1; b <= size; b++)
			{
				_putchar(35);
			}
			_putchar('\n);
		}
	}
	else
	{
		_putchar('\n');
	}
}
