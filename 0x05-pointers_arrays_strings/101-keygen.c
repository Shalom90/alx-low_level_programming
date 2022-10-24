#include <stdlib.h>
#include <time.h>
/**
  * main - program that generates random valid passwords
  * for the program 101-crackme
  * Return: 0 as always
  */

int main(void)
{
	int crack[100];
	int x, add, y;

	add = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		crack[x] = rand() % 78;
		add += (crack[x] + '0');
		putchar (crack[x] + '0');

		if ((2772 - add) - '0' < 78)
		{
			n = 2772 - add - '0';

			add += y;

			puthcar(y + '0');

			break;
		}
	}
	return (0);
}
