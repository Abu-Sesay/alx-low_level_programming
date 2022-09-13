#include "main.h"

/**
 * _abs - main entry point
 *@n: character to be checked
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
