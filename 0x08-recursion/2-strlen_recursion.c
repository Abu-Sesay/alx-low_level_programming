#include "main.h"

/**
 * _strlen_recursion - the lenth of string
 * @s: The string character
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
