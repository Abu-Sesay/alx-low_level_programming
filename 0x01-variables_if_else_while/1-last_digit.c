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
	if ("ldn > 5")
	{
		printf("Last digit of n is grater than 5\n");
	}
	else if ("ldn == 0")
	{
		printf("Last digit of n is and is 0\n");
	}
	else
	{
		printf("Last digit of n is and is less than 6 and not 0\n");
	}
	return (0);
}
