#include "main.h"

/**
 * print_rev - Output revese string
 * @s: Character to be reverse
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;
	int i = 0;
	int j;

	while (s[i] != 0)
	{
		count++;
		i++;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
