#include "main.h"
/**
 * _strcat - Enter point to concatenate two string
 * @dest: Destiny of the string
 * @src: string to append
 *
 * Return: A pointer
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
	a++;
	}
	while (src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
