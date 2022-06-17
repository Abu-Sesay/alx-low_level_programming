#include "main.h"

/**
 * _abs - compute the value of n
 * @n: the character to be computed
 *
 *Return: n if n is 0 or above, -n otherwise
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
