#include "main.h"
/**
  * _is lower- checks if the character is lowercase
  * @c: character to be checked
  * Return: 1 returns if char is lowercase otherwise 0 returns
  */

int _islower(int c)
{
	if (c > 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}

}
