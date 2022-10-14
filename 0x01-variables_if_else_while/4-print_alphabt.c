#include <stdio.h>

/**
  * main- prints all letters except q and e
  * Return: returns 0 if successful as always
  */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);

		}

		ch++;
	}

	putchar('\n');

	return (0);
}
