#include "main.h"

/**
 * _print_rev_recursion - The reverse string
 * @s: The character
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
