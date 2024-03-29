#include "main.h"

/**
 * _strncpy - The function to copy string
 * @dest: character pointer
 * @src: Another character pointer
 * @n: int
 * Return: chr
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; (i < n && src[i] != 0); i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
