#include "main.h"
#include <stdio.h>

/**
 * print_number - print the numbers since 0 up to 9
 * _putchar - gives out the value of int x
 *
 * Return: The numbers since 0 up to 9
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
	
}
