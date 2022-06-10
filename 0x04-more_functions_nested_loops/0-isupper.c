#include "main.h"
#include <stdio.h>

/**
 * main - Enter point
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int main(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
