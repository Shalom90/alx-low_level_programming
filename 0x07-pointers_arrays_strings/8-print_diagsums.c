#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of #'s in diagnols of square
 * @a: input square array
 * @size: size of one dimension in array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x = 0, sum1 = 0, sum2 = 0;

	while (x < size) /* number repetitions*/

	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + x * size + x);
		sum2 = sum2 + *(a + x * size + size - x - 1);

		x++;
	}

	printf("%d, %d\n", sum1, sum2);
}

