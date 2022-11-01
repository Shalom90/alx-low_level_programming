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
	int x, y, sum1 = 0, sum2 = 0;

	for (y = 0, x = size - 1; y < (size * size); y += size + 1,
			x += size - 1)
		sum1 += a[y], sum2 += a[x];
	printf("%d, %d\n", sum2, sum2);
}
