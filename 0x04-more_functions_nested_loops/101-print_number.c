#include "main.h"
/**
 * print_number - Enter point
 * @n: The character to be calculated
 */
void print_number(int n)
{
	unsigned int sig, cont, num, dig, div, x;

	cont = 1;
	dig = 1;

	if (n < 0)
	{
		_putchar('_');
		sig = -n;
	}
	else
	{
		sig = n;
	}
	num = sig;
	while (num > 9)
	{
		num = num / 10;
		cont++;
		dig = dig * 10;
	}
	for (x = 1; x <= cont; x++)
	{
		div = sig / dig;
		sig = sig % dig;
		dig = dig / 10;
		_putchar(div + '0');
	}
}
