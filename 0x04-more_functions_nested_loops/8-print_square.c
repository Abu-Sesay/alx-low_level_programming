#include "main.h"

/**
 * print_square - Enter point
 * @size: Character that determines no of lines
 *
 */
void print_square(int size)
{
	int i, x;

	for (i = 1; i <= size; i++)
	{
		for (x = 1; x <= i; x++)
		{
			while (x <= size)
			{
				x++;
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
