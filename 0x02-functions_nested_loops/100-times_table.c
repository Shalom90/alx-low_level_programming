#include "main.h"
/**
  * print_times_table- prints the n times table
  * @n : number times tabe
  * Return: void
  */
void print_times_table(int n)
{
	int x, y, times;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);

			for (y = 1; y <= n; y++)
			{
				times = x * y;
				_putchar(44);
				_putchar(32);

				if (times <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(times + 48);
				}
				else if (times <= 99)
				{
					_putchar(32);
					_putchar((times / 10) + 48);
					_putchar((times % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}

