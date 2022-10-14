#include <stdio.h>

/**
  * main- program prints all possible combimaions of single digit numbers
  * using putchar function only
  * Return: 0 returns if program is successful
  */

int main(void)
{
	int myNum = 0;

	for (myNum = 0; myNum < 10; myNum++)

	{
		putchar((myNum % 10) + '0');
		if (myNum == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
