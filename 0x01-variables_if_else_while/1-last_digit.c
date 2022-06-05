#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Enter point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ("last digit of %d > 5", n)
	{
		printf("Last digit of %d is grater than 5\n", n);
	}
	else if ("Last digit of %d == 0", n)
	{
		printf("Last digit of %d is and is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	}
	return (0);
}
