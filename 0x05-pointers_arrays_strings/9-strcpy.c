#include "main.h"

/**
 * *_strcpy - To copy string
 * @dest: character to be cpy
 * @src: another character to be cpy
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
