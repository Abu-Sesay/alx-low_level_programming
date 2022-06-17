#include <stdio.h>
#include <stdlib.h>
/**
 * main - Enter point
 *
 * Return: Always 0. 
 */
int main(void)
{
	long double f1 = 1, f2 = 1, f3;
	int i;

	i = 1;
	printf("%.Lf ", f2);
	while (i <= 49)
	{
	f3 = f1 + f2;
	printf("%.Lf", f3);
	i++;
	f1 = f2;
	if (i != 50)
	{
		printf(", ");
	}
	}
	putchar('\n');
	return (0);
}
