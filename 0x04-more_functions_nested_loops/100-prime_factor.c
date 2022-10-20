#include <stdio.h>
#include<stdint.h>

/**
  * main- finds and prints the largest prime factor of the number
  * 612852475143 followed by a new line
  * Return: 0 returns
  */

int main(void)
{
	int newdigit, y;
	long int x = 612852475143;

	for (y = 2; y <= x; y++)
	{
		if (x % y == 0)
		{
			x = x / y;
			newdigit = y;
		}
	}
	printf("%d\n", newdigit);
	return (0);
}
