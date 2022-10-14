#include <stdio.h>

/**
  * main- program prints the lowercase alphabet in reverse using putchar
  * Return: returns 0 if successful
  */
int main(void)
{

	char alpha = 'z';

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);

}
