#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string input
 * @c: character to find
 * Return: pointer to first occurence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] != '\0'; x++)

		if (s[x] == c)

			break;

	return (s[x] == c ? (s + x) : '\0');
}
