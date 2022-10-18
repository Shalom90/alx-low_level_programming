#include "main.h"
/**
  * print_sign- prints the sign of a number
  * @n: number to be checked for in the task
  * Return: 1 returns and prints + if n is greater than zero
  * otherwise 0 returns and prints 0 if n is zero
  * otherwise -1 returns and prints - if n is less than zero
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

