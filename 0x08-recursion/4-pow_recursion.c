#include "main.h"

/**
 * _pow_recursion - The value to a power
 * @x: The base
 * @y: power
 * Return: The value raised to a power
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
