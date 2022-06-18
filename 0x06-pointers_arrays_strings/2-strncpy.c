#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: String dest
 * @src: string to copy
 * @n: Number of bits
 *
 * Return: Pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
