#include "main.h"
#include <stdlib.h>
/**
  * *_calloc - allocates memory of an array of a certain no of elements
  * of size bytes each
  * @nmemb: no. of elements
  * @size: byte size of each array of element
  * Return: NULL returns if nmemb or size is 0 or function fails, otherwise
  * a pointer to the allocated memory returns
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
