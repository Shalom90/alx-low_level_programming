#include <stdio.h>

/**
  * main- prints the numbers from 1 to 100
  * followed by a new line. But for the multiples of three print Fizz instead
  * of the number and for the multiples of five print Buzz.
  * For numbers which are multiples of both three and five, print FizzBuzz.
  * Return: 0 returns as always
  */

int main(void)
{
	int x;

	for (x = 1; x < 100; x++)

	{
		if ((x % 5 == 0) && (x % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("Buzz\n");
	return (0);
}
