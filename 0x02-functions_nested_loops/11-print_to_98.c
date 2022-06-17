#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - enter point
 * @n: char to be calculated
 *
 */

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
		printf("98");
		putchar('\n');
	}
	if (n > 98)
	{
		for (a = n; a > 98; a--)
		{
			printf("%d, ", a);
		}
		printf("98\n");
	}
	if (n == 98)
	{
		printf("98\n");
	}
}
