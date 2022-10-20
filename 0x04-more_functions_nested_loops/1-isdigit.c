#include "main.h"
/**
  * _isdigit- checks for a digit 0 through 9
  * @c: digit to be checked for
  * Return: 1 Returns if c is a digit otherwise 0 returns
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
