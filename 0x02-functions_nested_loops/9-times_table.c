#include "main.h"
/**
  * times_table- prints the 9 times table
  * Return: void returns
  */

void times_table(void)
{
	int x, y, times;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);

		for (y = 1; y <= 9; y++)
		{
			times = x * y;
			_putchar(44);
			_putchar(32);

			if (times <= 9)
			{
				_putchar(32);
				_putchar(times + 48);

			}
			else
			{
				_putchar((times / 10) + 48);
				_putchar((times % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
