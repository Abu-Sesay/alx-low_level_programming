#include "main.h"

/**
 * swap_int - swap the two numbers
 * @a: one of the intiger to be swap
 * @b: the second int to be swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
