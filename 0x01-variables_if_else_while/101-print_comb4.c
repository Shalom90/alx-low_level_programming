#include <stdio.h>

/**
  * main- program prints all possible combinations of three digits
  * using putchar function only
  * Return: returns 0 as always if successful
  */

int main(void)
{
	int x, y, z;

	for (x = 0; x < 7; x++)
	{
		for (y = x + 1; y < 8; y++)
		{
			for (z = y + 1; z < 9; z++)
			{

			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			putchar((z % 10) + '0');

			if (x == 6 && y == 7 && z == 8)
				continue;

			putchar(',');
			putchar(' ');

			}

		}

	}

	putchar('\n');
	return (0);

}
