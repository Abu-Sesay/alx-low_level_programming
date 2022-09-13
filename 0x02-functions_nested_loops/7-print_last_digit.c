#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: value to be checked
 *
 *Return: Last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
