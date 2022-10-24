#include "main.h"
/**
  * puts_half- prints half of a string followed by a new line
  * @str: string printer
  */

void puts_half(char *str)
{
	int a = 0, b = 0, c;

	while (str[a++])

		b++;
	if ((b % 2) == 0)
		c = b / 2;

	else
		c = (b + 1) / 2;

	for (a = c; a < b; a++)
		_putchar(str[a]);

	_putchar('\n');

}
