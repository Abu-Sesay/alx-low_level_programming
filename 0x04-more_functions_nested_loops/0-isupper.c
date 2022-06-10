#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * _isupper - Enter point
 * @c: character to be checked
 *
 * Return: Always 0.
 */
int _isupper(int c)
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
