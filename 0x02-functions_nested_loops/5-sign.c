#include "main.h"

/**
 * print_sign - enter point
 * @n: The character to be checked
 * _putchar - print the signs of the character
 *
 * Return: 1 if n is greater than zero, 0 if n is equal to
 *zero and -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(0 + '+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar(0 + '-');
		return (-1);
	}
	_putchar('\n');
}
