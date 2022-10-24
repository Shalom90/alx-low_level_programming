#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - program that generates random valid passwords
  * for the program 101-crackme
  * Return: 0 as always
  */

int main(void)
{
	int pass, add;

	srand(time(NULL));
	add = 0;

	while (add <= 2645)
	{
		pass = (rand() % 128);
		add += pass;
		printf("%c", pass);

	}

	printf("%c", 2772 - add);

	return (0);
}
