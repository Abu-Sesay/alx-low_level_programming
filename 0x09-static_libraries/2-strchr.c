#include "main.h"

/**
 * *_strchr - locating a character in a string
 * @s: the sring point to
 * @c: the character to found
 *
 * Return: pointer to dest
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (0);
		}
	}
	return (0);
}
