#include "main.h"

/**
 *jack_bauer - print every minutes
 *
 *Return: 0
 */
void jack_bauer(void)
{
	int x, y, j, k;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x == 2 && y == 4)
			{
			break;
			}
			for (j = 0; j <= 5; j++)
			{
			for (k = 0; k <= 9; k++)
			{
			_putchar(x + '0');
			_putchar(y + '0');
			_putchar(':');
			_putchar(j + '0');
			_putchar(k + '0');
			_putchar('\n');
			}
			}
		}
	}
}
