#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n number of elements of na array
 * @a: int pointer
 * @n: another integer
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
