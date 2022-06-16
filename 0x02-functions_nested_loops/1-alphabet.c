#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Enter point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
	return (0);
}
