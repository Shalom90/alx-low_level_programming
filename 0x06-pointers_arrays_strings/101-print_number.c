#include "main.h"
/**
  * print_number- prints an integer
  * @n: integer
  * Return: void returns
  */

void print_number(int n)
{
	unsigned int a, b, print;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	print = 1;

	while (b > 9)
	{
		b /= 10;
		print *= 10;
	}

	for (; print >= 1; print /= 10)
	{
		_putchar(((a / print) % 10) + 48);
	}
}
