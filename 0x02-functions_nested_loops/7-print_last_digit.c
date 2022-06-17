#include "main.h"

/**
 * print_last_digit - enter point
 * @c: Character to be checked
 *
 * Return: the last number
 */

int print_last_digit(int c)
{
	int a;

	if (c < 0)

		a = -1 * (c % 10);
	a = c % 10;

	if (a < 0)
		a = -1 * (c % 10);
	_putchar(a + '0');
	return (a);
}
