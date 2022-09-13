#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: value to be checked
 *
 *Return: Last digit
 */
int print_last_digit(int n)
{
	int m, x;

	m = n % 10;
	if (m < 0)
	{
		x = m * (-1);
		_putchar(x + '0');
		return (x);
	}
	else
	{
		_putchar(m + '0');
		return (m);
	}
}
