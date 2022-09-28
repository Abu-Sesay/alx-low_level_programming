#include "main.h"

/**
 * factorial - To find the factorial of a number
 * @n: The number to be input
 * Return: The factorial
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
