#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: first string.
 * @s2: second string.
 * @n: The maximum no of bytes of s2 to concatenate to s1.
 * Return: If the function fails, NULL returns
 * Otherwise - a pointer to a newly allocated space in memory returns.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int a = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		a++;

	concat = malloc(sizeof(char) * (a + 1));

	if (concat == NULL)

		return (NULL);

	a = 0;

	for (index = 0; s1[index]; index++)
		concat[a++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[a++] = s2[index];

	concat[a] = '\0';

	return (concat);
}
