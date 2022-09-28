#include "main.h"

/**
 * _strlen - Main function
 * @s: Input str
 * Return: str lenght
 */
int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	else
		return (0);
}
/**
 * two_string - compare them
 * @s: Input chr
 * @n: other chr
 * @x: Input zero
 * Return: 0 or 1
 */
int two_string(char *s, int x, int n)
{
	if (x == n)
		return (1);
	if (x > n)
		return (1);
	if (s[x] == s[n])
		return (two_string(s, x + 1, n - 1));
	return (0);
}
/**
 * is_palindrome - calculate if str is palindrome
 * @s: Input str
 * Return: 1 if a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	return (two_string(s, 0, (_strlen(s) - 1)));
}
