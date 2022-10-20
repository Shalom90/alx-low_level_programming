#include <stdio.h>
/**
  * print_number- function which prints an integer
  * using only _putchar function to print
  * @n: integer to be printed
  * Return: void
  */

void print_number(int n)
{
	unsigned int digit2, digit1 = n;
	int a = 1;

	if (n < 0)
	{
		_putchar('-');
		digit1 = n * -1;
	}
	digit2 = digit1;
	while (digit2 > 9)
	{
		a *= 10;
		digit2 = digit2 / 10;
	}
	while (a >= 1)
	{
		digit2 = digit1 % a;
		digit1 /= a;

		_putchar(digit1 + '0');
		digit1 = digit2;

		a /= 10;
	}
}
