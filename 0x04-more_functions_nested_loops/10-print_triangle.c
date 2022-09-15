#include "main.h"

/**
 * print_triangle - Entry point
 * @size: character to be checked
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, limit = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			limit--;
			for (j = 0; j < size; j++)
			{
				if (j < limit)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
