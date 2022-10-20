#include "main.h"
/**
  * print_most_numbers- prints numbers from 0 to 9
  * asides 2 and 4
  * Return: 0 as always
  */
void print_most_numbers(void)
{
	char myNum;

	for (myNum = '0'; myNum <= '9'; myNum++)

	{
		if (myNum != '2' && myNum != '4')
		{
			_putchar(myNum);
		}
	}
	_putchar('\n');
}
