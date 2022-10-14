#include <stdio.h>

/**
  * main- prints all single digit numbers of base 10 using putchar
  * Return: returns 0 if successful
  */
int main(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}

	putchar('\n');

	return (0);

}
