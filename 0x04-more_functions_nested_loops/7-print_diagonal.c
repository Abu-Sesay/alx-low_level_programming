#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: character of no of lines
 *
 */

void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i <= n; i++)
	{
		for (x = i; x <= i; x++)
		{
			if (i == x)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
