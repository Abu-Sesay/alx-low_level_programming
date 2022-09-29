#include "main.h"

/**
 * *_strchr - Main entry point
 * @s: The pointer
 * @c: The character
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
	}
	return (0);
}
