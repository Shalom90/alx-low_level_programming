#include <stdio.h>

/**
  * main- prints all numbers of base 16 in lowercase using putchar
  * Return: 0 returns if successful
  */

int main(void)

{
	int x = 0;
	char xy = 'a';

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}

	for (xy = 'a'; xy <= 'f'; xy++)
	{
		putchar(xy);
	}
	putchar('\n');
	return (0);
}
