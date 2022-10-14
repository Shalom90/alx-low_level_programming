#include <stdio.h>
/**
  * main- program which prints all possible different combination of two digits
  * using putchar function only
  * Return: 0 returns if successful as always
  */

int main(void)
{
	int x, y;

	x = 48;
	y = 48;

	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			putchar(y);
			putchar(x);
			if (x == 57 && y == 57)
			{
				break;

			}

			putchar(',');
			putchar(' ');
		}
		y++;
	}
		putchar('\n');
		return (0);
}
