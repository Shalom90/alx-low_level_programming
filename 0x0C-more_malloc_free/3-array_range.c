#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: if man > mix and if malloc fails, NULL returns.
 * otherwise the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *pa;
	int x;

	if (min > max)
		return (NULL);

	pa = malloc(sizeof(*pa) * ((max - min) + 1));

	if (pa == NULL)

		return (NULL);

	for (x = 0; min <= max; x++, min++)

		pa[x] = min;

	return (pa);
}
