#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size
 * @argv: chr
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int coin[5] = {25, 10, 5, 2, 1};
	int x, i, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (x >= coin[i])
			{
				x = x - coin[i];
				change = change + 1;
				if (x >= coin[i])
					i--;
				if (x == 0)
					break;
			}
		}
		printf("%d\n", change);
		return (0);
	}
}

