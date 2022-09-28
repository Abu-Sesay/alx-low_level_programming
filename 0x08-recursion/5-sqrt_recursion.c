#include "main.h"

/**
 * numb - The root value
 * @n: The number
 * @i: The root
 * Return: The root value
 */
int numb(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
		return (-1);
	return (numb(n, i + 1));
}
