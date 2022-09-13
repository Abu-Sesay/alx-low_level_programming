#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: value to be checked
 *
 *Return: Last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
