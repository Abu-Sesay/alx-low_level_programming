#include "main.h"
/**
 * *_memcpy - copies memory
 * @dest: str pointer
 * @src: str cpy
 * @n: size to print
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest, *s = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*d = *s;
		s++;
		d++;
	}
	return (dest);
}
