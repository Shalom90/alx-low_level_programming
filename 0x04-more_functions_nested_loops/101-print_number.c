#include <stdio.h>
/**
  * print_number- function which prints an integer
  * using only _putchar function to print
  * @n: integer to be printed
  * Return: void
  */

void print_number(int n)
{
	unsigned int digit = n;

	if (n < 0)
	{
		_putchar('-);
		digit = -digit;
	}
	if (digit > 9)
	{
		print_number(digit / 10);
	}
	_putchar(digit % 10 + '0');
}
