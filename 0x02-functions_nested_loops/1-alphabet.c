#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
