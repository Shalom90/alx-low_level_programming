#include "main.h"
/**
  * _atoi- converts a string to an integer
  * @s: string
  * Return: the int converted from the string
  */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int dig = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')

			dig = (dig * 10) + (*s - '0');

		else if (dig > 0)
			break;
	} while (*s++);

	return (dig * sign);


}
