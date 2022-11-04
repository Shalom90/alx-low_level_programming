#include <stdio.h>
/**
  * main- prints the sum of even valued Fibonacci sequence
  * whose values do not exceed 4,000,000.
  * Return: 0 as always
  */
int main(void)
{
	unsigned long fibnum1 = 0, fibnum2 = 1, fibadd;
	float even_sum;

	while (1)
	{
		fibadd = fibnum1 + fibnum2;

		if (fibadd > 4000000)

			break;

		if ((fibadd % 2) == 0)

			even_sum += fibadd;

		fibnum1 = fibnum2;
		fibnum2 = fibadd;

	}
	printf("%.0f\n", even_sum);

	return (0);
}
