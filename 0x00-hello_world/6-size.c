#include <stdio.h>
/**
  * main- Execution starts and ends here
  * Return: 0 returns if no error occurs, else a non-zero value returns
  * Size of- evaluates the size of a variable
  */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a floar: %ld bytes(s)\n", sizeof(float));
	return (0);
}
