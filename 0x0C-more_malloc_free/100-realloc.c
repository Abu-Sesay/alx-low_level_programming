#include "main.h"
#include <stdlib.h>

/**
 * *realloc - Reallocates memory
 * @ptr: pointer
 * @old_size: The prvious size
 * @new_size: The new size
 * Return: new value
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}
	return (ptr);
}
