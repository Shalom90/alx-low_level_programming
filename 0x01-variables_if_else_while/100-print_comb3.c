#include <stdio.h>
/**
  * main- program which prints all possible different combination of two digits
  * using putchar function only
  * Return: 0 returns if successful as always
  */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');

			if (x == 9 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
