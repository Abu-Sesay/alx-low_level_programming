#include "main.h"

/**
 * *_strcpy - To copy string
 * @dest: character to be cpy
 * @src: another character to be cpy
 * Return: char.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, count = 0;

	while (src[i] != 0)
	{
		count++;
		i++;
	}
	for (i = 0; i <= count; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = 0;
	return (dest);
}
