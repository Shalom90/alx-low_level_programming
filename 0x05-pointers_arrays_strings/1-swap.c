#include "main.h"

/**
  * swap_int- swaps the value of two integers
  * @a: pointer one
  * @b: pointer two
  * Return: void or nothing
  */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
