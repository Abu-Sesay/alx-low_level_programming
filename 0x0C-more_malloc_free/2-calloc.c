#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Memory allocation
 * @nmemb: Number of items
 * @size: The size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		s[i] = 0;
	}
	return (s);
}
