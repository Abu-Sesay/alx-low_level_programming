#include "main.h"

/**
 * times_table - to check 9 times table
 *
 * Return: none
 */
void times_table(void)
{
	int i = 0, j = 0, x = 0;

	while (i <= 9)
	{
		j = 0;
		while (j < 10)
		{
		x = (0 + j) * i;
		if (j == 0)
		{
		_putchar(x + '0');
		}
		else if (x > 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
		}
		else if (x <= 9)
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(x + '0');
		}
		j++;
		}
		_putchar('\n');
		i++;
	}
}
