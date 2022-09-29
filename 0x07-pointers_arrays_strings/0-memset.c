#include "main.h"
#include <stdio.h>

/**
 * _memset - function that fills memory
 * @s: pointer value
 * @b: character that contain the value
 * @n: size to charge
 * Return: pointer with value update
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p = b;
		p++;
	}
	return (s);
}
