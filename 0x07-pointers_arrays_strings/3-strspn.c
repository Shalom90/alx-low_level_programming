#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @accept: characters that prefix substring must include
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, len1 = 0, len2 = 0;

	while (accept[len1] != '\0')

		len1++;

	for (x = 0; s[x] != '\0'; x++)

		for (y = 0; y < len1; y++)

			if (s[x] == accept[y])

				len2++, y = len1;

			else
				if (y == len1 - 1)

					goto exit;
exit: return (len2);
}
