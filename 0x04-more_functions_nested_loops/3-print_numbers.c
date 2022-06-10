#include "main.h"

/**
 * main - Enter point
 * print_number - Enter point
 * Return: Always 0.
 *_putchar - print character from 0 to 9
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
