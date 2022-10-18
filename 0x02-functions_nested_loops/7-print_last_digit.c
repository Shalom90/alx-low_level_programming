#include "main.h"
/**
  *print_last_digit- prints the last digit of a number
  * @x: number to be used to compute
  * Return: value of the last digit
  */

int print_last_digit(int x)
{
	int last_dig;

	last_dig = x % 10;

	if (last_dig < 0)
	{
		last_dig = last_dig * -1;
	}
	_putchar(last_dig + '0');

	return (last_dig);
}
