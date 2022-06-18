#include "main.h"
/**
 * _strncat - Entry point
 * @dest: Destiny of string
 * @src: String to appends
 * @n: Number of bits
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, s = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[s] != '\0' && s < n)
	{
		dest[a] = src[s];
		a++;
		s++;
	}
	dest[a] = '\0';
	return (dest);
}
