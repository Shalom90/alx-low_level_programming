#include <stdio.h>
/**
  * print_number- function which prints an integer
  * using only _putchar function to print
  * @n: integer to be printed
  * Return: void
  */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)

	{
		_putchar(45);
		a = -a;
	}
	else if ((a / 10) > 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + 48);
}
