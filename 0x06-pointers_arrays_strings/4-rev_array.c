#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: int ponter
 * @n: int character
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j = 0;
	int buffer[500];

	for (i = n - 1; i >= 0; i--)
	{
		buffer[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = buffer[i];
	}
}
