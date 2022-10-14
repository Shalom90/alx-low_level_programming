#include <stdio.h>

/**
  * main- program prints lowercase a-z
  * Return: returns 0 if program is successful
  */

int main(void)
{
	char ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);

		}
	putchar('\n');
	return (0);

}
