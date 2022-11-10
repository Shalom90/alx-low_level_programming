#include <stdlib.h>
#include "main.h"
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *cp;

	cp = malloc(b);

	if (cp == NULL)
	{
		exit(98);

		return (NULL);
	}

	return (cp);
}
