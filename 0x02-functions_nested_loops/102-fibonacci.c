#include <stdio.h>
/**
  * main- prints the first 50 fibonacci numbers
  * Return: 0 returns as always
  */
int main(void)
{
	int a;
	long int num1, num2, sum;

	num1 = 1;
	num2 = 2;

	printf("%ld, %ld", num1, num2);

	for (a = 0; a < 48; a++)
	{
		sum = num1 + num2;
		printf(", %ld", sum);

		num1 = num2;
		num2 = sum;
	}
	printf("\n");

	return (0);
}
