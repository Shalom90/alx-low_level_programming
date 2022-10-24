#include "main.h"
/**
  * puts2- prints every other character of a string
  * starting with the first character, followed by a new line
  * @str: string characters
  * Return: returns void or nothing
  */

void puts2(char *str)
{
	int x = 0, y = 0;

	while (str[x++])

		y++;
	for (x = 0; x < y; x + = 2)
		_putchar(str[x]);

	_putchar('\n');

}
