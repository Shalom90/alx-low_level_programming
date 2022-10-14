#include <stdio.h>

/**
  * main- prints alphabets in lowercase and uppercase
  * Return: 0 returns if program runs successfully
  */

int main(void)
{
	char ch = 'a';
	char alpha = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}

	for (alpha = 'A'; alpha <= 'z'; alpha++)
{
	putchar(alpha);

}
	putchar('\n');

	return (0);
}
