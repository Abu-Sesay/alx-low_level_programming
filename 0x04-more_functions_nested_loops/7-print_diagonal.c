#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: character to compute
 * Return: none
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
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
