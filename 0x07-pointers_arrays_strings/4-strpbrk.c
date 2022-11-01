#include "main.h"

/**
 * _strpbrk- locates the first occurrence in the string s of any of the
 * bytes in the string accept
 * @s: input string to search for matching char
 * @accept: characters that could be matched
 * Return: returns a pointer to the byte in s that matches one of the bytes
 * in accept or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)

		for (y = 0; accept[y] != '\0'; y++)

			if (s[x] == accept[y])

				goto exit;

exit: return (s[x] != '\0' ? s + x : '\0');
}
