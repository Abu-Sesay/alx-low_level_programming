#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: Number one str
 * @s2: Number 2 str
 *
 * Return: The difference
 */
int _strcmp(char *s1, char *s2)
{
	char ch = 0;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	ch = *s1 - *s2;
	return (ch);
}
