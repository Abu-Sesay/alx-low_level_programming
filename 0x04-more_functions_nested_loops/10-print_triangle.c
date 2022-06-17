#include "main.h"

/**
 * print_triangle - Enter point
 * @size: character for no of lines
 *
 */

void print_triangle(int size)
{
	int i, a;

	for (i = 1; i <= size; i++)
	{
		for (a = size; a >= 1; a--)
		{
			if (a <= i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
